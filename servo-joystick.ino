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
