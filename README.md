# ESP32 Infrared Sensor Receiver Module Project

## Project Overview
This project demonstrates how to use an infrared (IR) sensor receiver module with an ESP32 microcontroller to decode signals from an IR remote control. This can be useful in various applications, such as controlling devices wirelessly using an IR remote.

## Components Needed
- ESP32 Microcontroller
- Infrared (IR) Receiver Module (e.g., TSOP1838)
- IR Remote Control
- Jumper Wires
- Breadboard

## Circuit Setup
1. **Connecting the IR Receiver Module to ESP32:**
   - Connect the data pin of the IR receiver module to GPIO pin 15 on the ESP32.
   - Connect the power (VCC) and ground (GND) pins of the IR receiver module to the corresponding pins on the ESP32.

## Instructions
1. **Setup:**
   - Include the necessary libraries: `IRremoteESP8266`, `IRrecv`, and `IRutils`.
   - Initialize the IR receiver on GPIO pin 15 using the `IRrecv` object.
   - Start the IR receiver in the `setup()` function and initialize serial communication for debugging.

2. **Operation:**
   - In the `loop()` function:
     - Check if the IR receiver has received a signal using `irrecv.decode(&results)`.
     - Print the received IR signal to the Serial Monitor.
     - Compare the decoded value with known codes for different buttons on the remote control.
     - Perform actions based on which button is pressed (e.g., print a message to the Serial Monitor).

3. **Considerations:**
   - **IR Remote Codes:** Different remotes have unique codes for each button. Decode your remote's codes using the `resultToHexidecimal(&results)` function.
   - **Signal Interference:** Ensure the IR receiver is not exposed to strong sunlight or other IR sources, which can interfere with signal reception.

## Applications
- **Remote Control:** Control electronic devices wirelessly using an IR remote.
- **Home Automation:** Integrate IR control for various home appliances.
- **Robotics:** Use an IR remote to control a robot or other automated system.

## Notes
- **IR Receiver:** Ensure the IR receiver is correctly oriented towards the remote control for accurate signal reception.
- **Serial Output:** Use the Serial Monitor to debug and identify the IR codes for different buttons on your remote.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 Infrared Sensor Receiver Module](https://projectslearner.com/learn/esp32-infrared-sensor-receiver-module)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner