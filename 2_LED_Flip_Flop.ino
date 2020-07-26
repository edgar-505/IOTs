void setup() {
  // put your setup code here, to run once:
  pinMode(16, OUTPUT);
  pinMode(2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(16, HIGH);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(16, LOW);
  digitalWrite(2, LOW);
  delay(1000);

}
