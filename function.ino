const int LED = 13;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  Blinked_Led();
}

void Blinked_Led(){
  digitalWrite(LED, HIGH);
  delay(500);

  digitalWrite(LED, LOW);
  delay(500);
}
