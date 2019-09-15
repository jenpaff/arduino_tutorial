
int led = 9;

void setup() {
  // OUTPUT -> LED gives output
  pinMode (led, OUTPUT);

}

void loop() {
  // HIGH (high voltage = on, LOW = low voltage = off)
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
