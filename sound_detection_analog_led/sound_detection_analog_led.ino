
int sound = A0;
int led = 9;
int lightOn = LOW;
int volume;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(sound, INPUT);

}

void loop() {

  volume = analogRead(sound);
  Serial.println(volume);

  if (volume < 50) {
    lightOn = lightOn == HIGH ? LOW : HIGH;
  }
  
  digitalWrite(led, lightOn);
}
