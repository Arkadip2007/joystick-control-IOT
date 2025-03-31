# joystick-control-IOT

https://github.com/user-attachments/assets/80c691e2-4e36-4d5f-be2a-727a6f9ae27c

![joystick control](https://github.com/user-attachments/assets/b14bdd52-f8cc-41d0-abf8-b3e17223e51c)


## code 

```cpp
#include <Servo.h>

Servo myServo;  // Create a Servo object
int potPin = A0; // Potentiometer connected to A0
int servoPin = 9; // Servo motor signal pin
int potValue; // Variable to store potentiometer reading
int angle; // Variable to store servo angle

void setup() {
    myServo.attach(servoPin); // Attach the servo to pin 9
    Serial.begin(9600); // Start Serial Monitor
}

void loop() {
    potValue = analogRead(potPin); // Read potentiometer value (0-1023)
    angle = map(potValue, 0, 1023, 0, 180); // Convert to 0-180 degrees
    myServo.write(angle); // Move servo to mapped position

    // Print values to Serial Monitor
    Serial.print("Potentiometer Value: ");
    Serial.print(potValue);
    Serial.print(" | Servo Angle: ");
    Serial.println(angle);

    delay(10); // Small delay for smooth movement
}
```

<img align="right" alt="servo" width="300" src="https://github.com/user-attachments/assets/bef15b3e-f6a0-497e-a3d8-3e770eeb7a45">


### **Connections:**
- **Servo Motor:**
  - **VCC (Red wire)** → **5V**
  - **GND (Black/Brown wire)** → **GND**
  - **Signal (Yellow/White wire)** → **D9 (PWM Pin)**  

- **Potentiometer:**
  - **Left Pin** → **5V**
  - **Middle Pin** → **A0 (Analog Input)**
  - **Right Pin** → **GND**

---

<p align="center">
  <img src="https://github.com/user-attachments/assets/f3b24949-6704-466e-a714-7d245755202d" alt="Image 1" width="46%" style="margin-right: 10px;"/>
  <img src="https://github.com/user-attachments/assets/d143baf9-8e0b-4c58-bdca-fc41519062f8" alt="Image 2" width="46%" style="margin-right: 10px;"/>
</p>
