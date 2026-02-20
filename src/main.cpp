#include <Arduino.h>

#define RED_PIN 9
#define GREEN_PIN 10
#define BLUE_PIN 11

// ... definitions from previous commit ...

void setup() {
    Serial.begin(9600);

    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);

    Serial.println("RGB LED Control System - Initialized");
    delay(1000);
}

// ... setup code from above ...

void loop() {
    // Basic Digital Toggle for testing hardware
    digitalWrite(RED_PIN, HIGH);
    delay(1000);
    digitalWrite(RED_PIN, LOW);
    delay(1000);
}