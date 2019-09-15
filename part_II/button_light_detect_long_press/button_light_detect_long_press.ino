
int button = 13;
int led = 9;

int lightOn = HIGH;
int previousButtonState = LOW;
int buttonState = HIGH;
boolean buttonActive = false;

long timer;
long longPressTime = 2000;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);

}

void loop() {

  buttonState = digitalRead(button);
  Serial.println(buttonState);

  if (buttonState == HIGH && previousButtonState == LOW) {
    // if state is 1 and previous state was 0 (if state changed)
    buttonActive = true;
    timer = millis(); // start timer 
  }

  if (buttonActive && millis() - timer > longPressTime) {
    // if button press is over 2 seconds then turn light on/off
    lightOn = lightOn == HIGH ? LOW : HIGH;
    buttonActive = false;
  }
  
  digitalWrite(led, lightOn);
  previousButtonState = buttonState;
}
