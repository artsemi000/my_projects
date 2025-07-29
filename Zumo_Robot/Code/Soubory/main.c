#include "main.h"
#include "pololu_zumo.h"
#include "pololu_qtr.h"

uint16_t sensors[6];
float Kp = 0.25, Ki = 0.0, Kd = 1.0;
float integral = 0, last_error = 0;
int base_speed = 100;

int get_line_position(uint16_t *sensor_values)
{
    long weighted_sum = 0;
    long total = 0;
    for (int i = 0; i < 6; i++) {
        weighted_sum += sensor_values[i] * (i * 1000);
        total += sensor_values[i];
    }

    if (total == 0) return 2500; // Střed, pokud čára není

    return weighted_sum / total;
}

void follow_line_pid(void)
{
    Pololu_QTR_FillSensors(sensors);
    int position = get_line_position(sensors); // 0–5000
    int error = 2500 - position;

    integral += error;
    float derivative = error - last_error;
    last_error = error;

    float correction = Kp * error + Ki * integral + Kd * derivative;

    int left = base_speed + correction;
    int right = base_speed - correction;

    Pololu_Zumo_Motors(left, right);
}

int main(void)
{
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();
    MX_TIM3_Init();  // PWM pravý
    MX_TIM4_Init();  // PWM levý
    MX_TIM5_Init();  // QTR senzory

    Pololu_Zumo_InitMotors();
    Pololu_QTR_InitSensors(QTR_Device_Zumo);
    Pololu_QTR_EnableMeassure(true);
    Pololu_Zumo_SensorLED(true);

    // Kalibrace
    Pololu_QTR_ClearCalibrate();
    for (int i = 0; i < 100; i++) {
        Pololu_QTR_StepCalibrate();
        Pololu_Zumo_Motors(-50, 50);  // otočka
        HAL_Delay(10);
    }
    Pololu_Zumo_Motors(0, 0);
    HAL_Delay(500);

    while (1) {
        follow_line_pid();
        HAL_Delay(10);
    }
}
