
int port = 9;
int fade = 5;
int brightness = 0;

// 0 - 255 range for pulse with modulation
// -> 8-bit system 2^8 = 256 values
int minVal = 0;
int maxVal = 255;

void setup() {
  // OUTPUT -> LED gives output
  pinMode (port, OUTPUT);
}

void loop() {
  // HIGH (high voltage = on, LOW = low voltage = off)
  // digital is either on or off, therefore we use analogWrite instead of digitalWrite
  analogWrite(port, brightness);
  brightness += fade;

  if (brightness == minVal || brightness == maxVal) {
    fade = -fade;
  }
  delay(50);
}
