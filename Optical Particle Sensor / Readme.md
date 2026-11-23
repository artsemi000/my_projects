Together with a university colleague, we designed a small and affordable sensor capable of measuring the concentration of airborne particulate matter (PM1.0, PM2.5, and PM10). The sensor uses laser light and the principle of light scattering. Two lasers illuminate the flowing air, while photodiodes measure how much light is scattered by the particles. Based on these measurements, we can determine the concentration and approximate size of the particles.

The device is controlled by an Arduino Nano, which handles data acquisition and processing. To improve the accuracy of the output, we use a simple algorithm (Random Forest) to help evaluate the measured concentrations.

The sensor was designed to be compact, affordable, and suitable for both domestic and industrial applications.

As part of this project, we focused not only on designing the optical sensor itself but also on its manufacturing and practical implementation. The project included programming the Arduino, which controls the entire measurement process and processes data from the sensors.

Another important part of our work was designing a 3D-printed frame that serves as a solid and precise structure for mounting all the sensor components. We designed the frame to securely hold all components in their correct positions while allowing easy handling and assembly.

An essential part of the project was also careful planning. We had to determine which components and materials were required for manufacturing, how to order them, and how to purchase everything efficiently. This process helped us develop our planning and organizational skills, as well as our ability to work effectively as a team.

Overall, the project was not just about technical design but also involved the practical challenges of manufacturing, programming, and team coordination. This experience significantly contributed to our professional development and gave us a better understanding of the complex process of developing such a device.

## ✅ What We Discovered

- The green laser showed higher sensitivity than the red laser.
- Measurements were more stable at higher dust concentrations.
- Measurements must be performed in shaded conditions to prevent interference from external light.

## Improvements and Future Development

- Adding Wi-Fi or Bluetooth for wireless data transmission.
- Battery-powered operation for fully autonomous, cable-free use.
- Calibration for other types of particles (e.g., pollen and smoke).

## 📄 Project Documentation

The attached document contains the complete technical report, describing the sensor's construction, operating principle, components used, wiring diagram, measurement results, and proposals for further development.

[Technical Report](./Protokol)
