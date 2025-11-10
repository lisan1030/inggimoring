#include <Servo.h>

#define PIN_SERVO 10

#define TIMEOUT ((INTERVAL / 2) * 1000.0) // maximum echo waiting time (unit: usec)
#define SCALE (0.001 * 0.5 * SND_VEL) // coefficent to convert duration to distance

// configurable parameters for Servo
#define _DUTY_MIN 300 // servo full clock-wise position (0 degree)
#define _DUTY_NEU 1500 // servo neutral position (90 degree)
#define _DUTY_MAX 2600 // servo full counter-clockwise position (180 degree)

#define _POS_START (_DUTY_MIN + 100.0)    // servo start position
#define _POS_END   (_DUTY_MAX - 100.0)    // servo end position

// Loop Interval
#define INTERVAL 20     // servo update interval (unit: msec)

Servo myservo;

void setup() {
  myservo.attach(PIN_SERVO); 
  myservo.writeMicroseconds(_DUTY_NEU);
}

void loop() {
  while (1) {
    myservo.writeMicroseconds(_DUTY_NEU);
  }
}
