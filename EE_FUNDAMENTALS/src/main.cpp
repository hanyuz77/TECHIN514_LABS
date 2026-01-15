#include <Arduino.h>

#include <Arduino.h>

const int ADC_PIN = A0;   
const float VREF = 3.3;

void setup() {
  Serial.begin(115200);
  delay(200);
  analogReadResolution(12);
}

void loop() {
  int adc = analogRead(ADC_PIN);
  float voltage = (adc / 4095.0) * VREF;

  Serial.print("ADC=");
  Serial.print(adc);
  Serial.print("  Voltage=");
  Serial.print(voltage, 3);
  Serial.println(" V");

  delay(200);
}
