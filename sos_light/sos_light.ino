
int led = 9;

void setup() {
  // OUTPUT -> LED gives output
  pinMode (led, OUTPUT);

}

void loop() {
  // HIGH (high voltage = on, LOW = low voltage = off)
  
  // S
  digitalWrite(led, HIGH);
  delay(1000);
  // O
  digitalWrite(led, LOW);
  delay(1000);
  // S
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);

  // break
  delay(5000);
}
