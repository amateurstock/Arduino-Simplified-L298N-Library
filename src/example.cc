#include <Arduino.h>
#include <L298N.hh>

// Arbitrarily picked pin numbers. Primarily for example ONLY.
L298N leftMotor(10, 9);
L298N rightMotor(13, 12, 11);

void setup() {
    Serial.begin(9600);
}

void loop() {
    leftMotor.updateMotors(L298N::FORWARD);
    rightMotor.updateMotors(L298N::FORWARD, 64);
    delay(5000);

    leftMotor.updateMotors(L298N::BACKWARD, 128);
    rightMotor.updateMotors(L298N::BACKWARD);
    delay(5000);
}
