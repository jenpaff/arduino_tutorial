
int button = 13;
int led = 9;
int lightOn = HIGH;
int previous = LOW;
int buttonState;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);

}

void loop() {

  buttonState = digitalRead(button);
  Serial.println(buttonState);

  if (buttonState == HIGH && previous == LOW) {
    lightOn = lightOn == HIGH ? LOW : HIGH;
  }
  
  digitalWrite(led, lightOn);
  previous = buttonState;
}
