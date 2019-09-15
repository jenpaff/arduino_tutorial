
int sound = 3;
int led = 9;
int lightOn = LOW;
int soundState;
int previous = LOW;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(sound, INPUT);

}

void loop() {

  soundState = digitalRead(sound);
  Serial.println(soundState);

  if (soundState == HIGH && previous == LOW) {
    lightOn = lightOn == HIGH ? LOW : HIGH;
  }
  
  digitalWrite(led, lightOn);
  previous = soundState;
}
