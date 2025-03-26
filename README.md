# Simplified L298N Motor Driver Library for Arduino
Do note that this only works with Arduino's framework. If this is to be adopted in other MCU frameworks (i.e. Espressif, STM), do modify the code to the necessary HAL drivers.

## Installation
Just copy both the L298N source and header file to their respective directories. Simply include it to the Arduino Sketch or wherever it's needed. Copying the example source file is not necessary.

### Arduino IDE
Copy both the L298N source and header file to the same location where your ".ino" sketch file resides.

### PlatformIO
Copy the L298N source and header file to the src and include folders, respectively.

## Usage
Each instance of the L298N object is good for *one motor* only. The L298N object has two overloads, one for a PWM-driven motor, and one for a digital-driven motor. There are two methods, `updateMotor()` and `stopMotor()`. The former has two overloads good for both motor types, the latter is universal for both.

### PWM-driven motor
Example:
```cpp
// Take note that these are just arbitrary pin numbers.
// Please pick the correct ones in your own project.
L298N motor1(1, 2, 3);

void setup() {
    // Some setup stuff
}

void loop() {
    // Some loop stuff
    motor1.updateMotors(L298N::FORWARD, 64);
    delay(2000);

    motor1.updateMotors(L298N::BACKWARD, 128);
    delay(2000);

    motor1.updateMotors(L298N::FORWARD, 192);
    delay(2000);

    motor1.updateMotors(L298N::BACKWARD, 255);
    delay(2000);

    motor1.stopMotor();
    delay(2000);
}
```

### Digital-driven motor
Example:
```cpp
// Take note that these are just arbitrary pin numbers.
// Please pick the correct ones in your own project.
L298N motor2(4, 5);

void setup() {
    // Some setup stuff
}

void loop() {
    motor2.updateMotor(L298N::FORWARD);
    delay(5000);

    motor2.updateMotor(L298N::BACKWARD);
    delay(5000);

    motor2.stopMotor();
    delay(5000);
}
```


