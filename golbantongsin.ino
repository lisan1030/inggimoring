#include <Servo.h>

#define PIN_LED   9   // LED active-low
#define PIN_SERVO 10  // servo motor

#define _DUTY_MIN 700
#define _DUTY_MAX 2300
Servo myservo;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  myservo.attach(PIN_SERVO); 
}

void loop() {
    myservo.writeMicroseconds(_DUTY_MIN);
    digitalWrite(PIN_LED, 0);
    delay(1000);
    myservo.writeMicroseconds(_DUTY_MAX);
    digitalWrite(PIN_LED, 1);
    delay(1000);
}
