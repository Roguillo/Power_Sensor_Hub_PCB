Board design files and work-in-progress code for Power Distribution and Sensor Hub PCB (personal project\IEEE Student Branch)

- For this project, I designed a general-purpose PCB for distributing power (7.4V to 3.3V, 5V, and 6V) and obtaining sensor data (distance using ultrasonic sensor module and orientation using IMU module). My intention for this board is to more easily prototype future projects requiring different voltage levels and sensor feedback for improving the design.
- Throughout the design process, I accounted for the required trace/island width/size based on expected current draw, I isolated the ground planes for three distinct areas (power, signal, LED array), and relied on star grounding to avoid interference between ground areas
- Areas
    - Power: includes battery input and power outputs
    - Signal: includes MCU, sensor peripherals, buttons, and headers for unused pins
    - LED Array: a 2x12 RGB LED array (WS2812B). 5V can be selected between power (from external battery) or signal (from USB) by closing the corresponding solder bridge. LEDs are driven by the MCU
