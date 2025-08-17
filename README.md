# Smorphi Single Maze Solver

This project enables a **Smorphi robot to autonomously solve a simple maze** using three IR sensors (front, left, and right) and an ESP32 Dev Module. The robot detects obstacles and navigates the maze using simple if-else logic.  

---

## Features
- Autonomous maze navigation  
- Obstacle detection using IR sensors  
- Simple if-else logic for path decisions  
- Compatible with **ESP32 Dev Module**  
- Uses the **Smorphi Single Library**  

---

## Hardware Required
- Smorphi single module robot  
- ESP32 Dev Module (controller)  
- Front, Left, and Right IR sensors  
- Jumper wires  
- Power source (5V/GND)  

---

## Library Requirements
1. **Smorphi Single Library** – for controlling Smorphi robot and reading sensor status.  

**Install Library via Arduino IDE:**  
- Open **Arduino IDE → Sketch → Include Library → Manage Libraries**  
- Search for `Smorphi Single` and install it  

> ⚠️ Do not use Smorphi Square library; this project only works with the Smorphi single library.  

---

## Hardware Connections
| Component       | ESP32 Pin / Module | Notes |
|-----------------|-----------------|-------|
| Front IR Sensor | Module1 FRONT   | Detects obstacle ahead |
| Left IR Sensor  | Module1 LEFT    | Detects obstacle on left |
| Right IR Sensor | Module1 RIGHT   | Detects obstacle on right |
| Power           | 5V / GND        | Shared between ESP32 and sensors |

> Ensure all IR sensors are properly aligned and connected to the correct module pins.  

---

## Setup Instructions
1. **Install Arduino IDE** (latest version recommended).  
2. **Install ESP32 Board Support**:  
   - Go to `File → Preferences → Additional Board Manager URLs`  
   - Add: `https://dl.espressif.com/dl/package_esp32_index.json`  
   - Then `Tools → Board → Board Manager → Search ESP32 → Install`.  
3. **Install Smorphi Single Library** as described in the **Library Requirements** section.  
4. **Connect Hardware** as per the **Hardware Connections** table.  
5. **Upload the Arduino Code** to the ESP32 Dev Module.  
6. **Run the Robot**: It will navigate the maze autonomously using the IR sensors.  

---

## Usage Tips
- Place the robot on a flat maze surface for accurate navigation.  
- Ensure sensors are clean and unobstructed for reliable obstacle detection.  
- Adjust delays in the code for smoother turns if necessary.  
- For debugging, use Serial Monitor to print sensor readings if needed.  

---

## Pro Tips
- This simple logic works well for single-path mazes.  
- You can extend the project with multiple QR code actions, logging, or advanced algorithms in the future.  
# Smorphi-Autonomous-Maze-Solver
