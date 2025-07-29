#ifndef STM_CORE_H_
#define STM_CORE_H_

#include <stm32f4xx.h>
#include <stdbool.h>

typedef enum {
	ioPortOutputPP, // output Push-Pull type
	ioPortOutputOC, // output Open Drain (like OC) type
	ioPortAnalog, // analog input – for A/D
	ioPortInputFloat, // input without pull-up/down
	ioPortInputPU, // input with pull-up
	ioPortInputPD, // input with pull-down
	ioPortAlternatePP, // alternative function output with push-pull mode
	ioPortAlternateOC // alternative function output - open drain
} eIoPortModes;

bool STM_SetPinGPIO(GPIO_TypeDef *pgpio, uint32_t bitnum, eIoPortModes mode);
bool STM_SetAFGPIO(GPIO_TypeDef *pgpio, uint32_t bitnum, uint32_t afValue);

void GPIOWrite(GPIO_TypeDef *pgpio, uint32_t bitnum, bool state);
void GPIOToggle(GPIO_TypeDef *pgpio, uint32_t bitnum);
void Init8LEDC(void);
void Write8LEDC(uint8_t val);
void InitSPILED(void);
void WriteSPILED(uint8_t val);

#define BOARD_BTN_BLUE    GPIOC,13
#define BOARD_LED         GPIOA,5

#endif /* STM_CORE_H */
