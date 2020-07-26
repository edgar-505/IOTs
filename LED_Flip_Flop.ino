// LED Flip Flop 

void setup() {
  pinMode(16, OUTPUT); // 16 = D0

}

void loop() {
  digitalWrite(16, HIGH);
  delay(2000); // milisecond = 1 detik
  digitalWrite(16, LOW);

}

// ON = HIGH = 1
// OFF = LOW = 0
