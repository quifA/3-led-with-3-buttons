# 3-led-with-3-buttons
This Arduino project allows the user to control three LEDs using three push buttons.  
Each button turns on its corresponding LED for 5 seconds, then turns it off automatically.

## Components Used
- Arduino UNO  
- 3 LEDs  
- 3 Push Buttons  
- 3 Resistors (220Ω for LEDs)  
- 3 Resistors (10kΩ pull-down for buttons)  
- Breadboard + Jumper wires  

## Pin Configuration
| Button   | Arduino Pin | LED   | Arduino Pin |
|----------|--------------|-------|--------------|
| Button 1 | D2           | LED 1 | D10          |
| Button 2 | D3           | LED 2 | D11          |
| Button 3 | D4           | LED 3 | D12          |

## 🧠 How it works
- When a button is pressed, the matching LED turns on.  
- It stays on for 5 seconds using delay(5000).  
- Then the LED automatically turns off.

## PIC
![Pic](https://github.com/user-attachments/assets/31de51a2-a0ef-4f41-951e-97c5b2b14e5c)
