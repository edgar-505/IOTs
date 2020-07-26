// Servo dan Led no IoT

#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(2); // 2 = D4
  pinMode(16, OUTPUT);
}

void loop() {
  servo.write(180);
  digitalWrite(16, HIGH);
  delay(1000);
  servo.write(0);
  digitalWrite(16, LOW);
  delay(1000);
}
