// Servo muter balik

#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(2); // 2 = D4
}

void loop() {
  servo.write(180);
  delay(1000);
  servo.write(0);
  delay(1000);
}
