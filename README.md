# Smart Blind Walking Stick

This project implements a smart walking stick for visually impaired individuals, equipped with an ultrasonic sensor, buzzer, and LED for obstacle detection and proximity alerts.

## Features

- **Proximity Alerts**:
  - Buzzer beeps at varying speeds based on obstacle distance.
  - Continuous beep for objects closer than 20 cm.
  - Faster beeps for objects between 20 cm and 40 cm.
  - Slower beeps for objects between 40 cm and 60 cm.
- **Visual Alert**: LED turns on when an obstacle is detected.

## Components Used

- **Ultrasonic Sensor** (HC-SR04): For measuring the distance to obstacles.
- **Buzzer**: For providing audio feedback based on distance.
- **LED**: For visual feedback.
- **Arduino Board**: To control the components.

## Circuit Diagram

1. Connect the **Trig** pin of the ultrasonic sensor to pin 9 of the Arduino.
2. Connect the **Echo** pin of the ultrasonic sensor to pin 10 of the Arduino.
3. Connect the **Buzzer** to pin 11 of the Arduino.
4. Connect the **LED** to pin 13 of the Arduino.

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/smart-blind-stick.git
   ```
2. Open the Arduino IDE and upload the provided code to your Arduino board.
3. Assemble the components as per the circuit diagram.
4. Power up the Arduino board.

## Code Overview

The code uses an ultrasonic sensor to measure distances and control the buzzer and LED:

1. **Distance Measurement**:
   - The sensor sends out ultrasonic waves and calculates the distance based on the time it takes for the waves to return.
2. **Feedback Mechanism**:
   - Continuous beep and LED on for distances less than 20 cm.
   - Faster beeps for distances between 20 cm and 40 cm.
   - Slower beeps for distances between 40 cm and 60 cm.
   - No feedback for distances greater than 60 cm.

## Usage

1. Power on the Arduino board.
2. The device will begin measuring distances and providing audio-visual feedback based on proximity to obstacles.
3. Monitor distance readings in the Serial Monitor (optional).

## Future Improvements

- Add a vibrating motor for tactile feedback.
- Implement a battery-powered design for portability.
- Enhance the feedback system to include different tones or patterns.

## Acknowledgements

Special thanks to the Arduino community for guidance and inspiration.

## Credits

Made by Shashank Singh and Anushka Banerjee (@anushka369).

