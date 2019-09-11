#include "Arduino.h"
#include <DHT12.h>

DHT12 dht12;

void setup() {
  Serial.begin(9600);
  dht12.begin();
}

void loop() {
  
  bool chk = dht12.read();
  if (chk) {
    Serial.println("Reading..");
    float temperature = dht12.readTemperature();
    float humidity = dht12.readHumidity();
    Serial.println("Temperature: " + (String) temperature);
    Serial.println("Humidity: " + (String) humidity);
  } else {
    Serial.println("Error reading! ");
  }
}
