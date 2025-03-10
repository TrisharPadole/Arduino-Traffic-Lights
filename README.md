# Traffic Light Simulation using Arduino

This project simulates a simple traffic light system using an Arduino. The system cycles through red, green, and yellow lights with appropriate delays.

## Components Required
- Arduino Uno (or compatible board)
- 3 LEDs (Red, Yellow, Green)
- 3 Resistors (220Ω each)
- Breadboard and jumper wires

## Pin Configuration
| LED Color | Arduino Pin |
|-----------|------------|
| Green     | 1          |
| Yellow    | 2          |
| Red       | 3          |

## Code Explanation
- The **red light** turns on for 5 seconds.
- The **green light** turns on for 5 seconds after the red turns off.
- The **yellow light** turns on for 2 seconds before the cycle repeats.

## Installation & Usage
### 1. Using Arduino Board
1. Open **Arduino IDE**.
2. Copy and paste the `traffic_light.ino` code.
3. Select the correct **Board** and **Port**.
4. Click **Upload** and observe the LED sequence.

### 2. Without Arduino Board (Simulation)
#### **Tinkercad**
1. Go to [Tinkercad](https://www.tinkercad.com/).
2. Create a new circuit and add an **Arduino Uno**, **3 LEDs**, and **3 resistors**.
3. Wire the components as per the pin configuration.
4. Paste the code in the text editor and start the simulation.

#### **Proteus**
1. Install **Proteus Design Suite**.
2. Add an **Arduino Uno**, **3 LEDs**, and **3 resistors**.
3. Load the compiled `.hex` file from the Arduino IDE.
4. Run the simulation to see the traffic light cycle.

## License
This project is open-source and available under the **MIT License**.

## Author
[Your Name]

