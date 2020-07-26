#include <Servo.h> // memasukkan library servo

Servo servo;

void setup() {
  servo.attach(2); // setup servo
  pinMode(16, OUTPUT); // setup LED
}

void loop() {
  servo.write(180);
  digitalWrite(16, HIGH); // ON
  delay(1000);
  servo.write(0);
  digitalWrite(16, LOW); // OFF
  delay(1000);
  
}
