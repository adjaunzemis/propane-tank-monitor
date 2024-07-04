#include <Arduino.h>

#define PIN_INTERNAL_LED 2
#define PIN_HALL_EFFECT_SENSOR_INPUT 33

void setup() {
    Serial.begin(115200);
    pinMode(PIN_HALL_EFFECT_SENSOR_INPUT, INPUT); 
    pinMode(PIN_INTERNAL_LED, OUTPUT);
}

void loop() {
    digitalWrite(PIN_INTERNAL_LED, HIGH);

    int sum = 0;
    for (int i = 0; i <= 100; i++) {
        sum += analogRead(PIN_HALL_EFFECT_SENSOR_INPUT);
        delay(50);
    }
    Serial.println(sum / 100);

    digitalWrite(PIN_INTERNAL_LED, LOW);

    delay(500);
}