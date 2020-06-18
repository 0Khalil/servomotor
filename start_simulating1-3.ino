
#include <Servo.h>


Servo servo_11;
Servo servo_10;



int i;

void setup() {
  servo_11.attach(11);
  servo_10.attach(10);

}

void loop() {
    for (i = 0; i <= 180; i++) {
      servo_11.write(i);
      servo_10.write(i);
      delay(500);
      for (i = 180; i >= 0; i--) {
        servo_11.write(i);
        servo_10.write(i);
        delay(500);
      }
    }

}