In this section, you can see videos demonstrating the results of my project. The robot reliably follows a black line using the infrared sensors I integrated and configured. It turns smoothly, maintains a steady speed, and avoids obstacles. All movements are controlled by a custom algorithm I designed for sensor data processing and dynamic motor control.

# How Do the Sensors Work?
I used an array of infrared (IR) sensors that detect light reflected from the surface below. A light-colored surface reflects the infrared light, whereas a black line absorbs it — allowing the microcontroller to easily determine the line's position and adjust the direction of travel accordingly. Sensor readings are continuously evaluated in real time to dynamically regulate the speed of each wheel.

# Why a Black Line?
Black surfaces absorb most of the incident light, creating a sharp contrast against a bright background. This enables highly accurate detection even at higher speeds, making the track clearly recognizable without requiring complex image processing.

# Future Improvements
There is still plenty of room to expand this project. In the future, I plan to add:

* **Tetherless Operation:** Currently, the robot operates via a USB connection, which restricts its mobility. To make it a truly autonomous unit, it needs an independent power source (such as a battery pack) and standalone startup without a continuous PC connection, allowing it to operate freely in real-world environments.
* **Bluetooth Control:** Adding wireless connectivity for manual remote control or real-time parameter tuning (e.g., PID gains) directly from a mobile app.
* **Automatic Sensor Calibration:** Implementing adaptive calibration for varying surface types and ambient lighting conditions so the robot performs reliably outside of a controlled test environment.

# Real-World Applications
This type of autonomous robot can be utilized in logistics centers or warehouses to transport goods along predefined routes. Its ability to accurately follow paths, avoid obstacles, and operate autonomously can significantly improve operational efficiency.

# Videos



https://github.com/user-attachments/assets/e42ae48e-35be-4841-bbe5-0cb834590ab0
