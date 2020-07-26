#include <HCSR04.h>

#define trigger 5
#define echo 4

HCSR04 distance(trigger, echo);

void setup() {
  Serial.begin(9600);
  
}

void loop() {
  float jarak = distance.dist();
  Serial.println(jarak);
  delay(1000);

}
