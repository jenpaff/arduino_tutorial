int button = 13;
int port = 9;
int buttonState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(port, OUTPUT);
  pinMode(button, INPUT);

}

void loop() {
  buttonState = digitalRead(button);
  Serial.println(buttonState);
  if (digitalRead(button) == LOW) {
    digitalWrite(port, HIGH);
  } else {
    digitalWrite(port, LOW);
  }
}
