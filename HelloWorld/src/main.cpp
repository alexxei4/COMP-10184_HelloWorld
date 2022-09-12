#include <Arduino.h>
unsigned long myTime;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  Serial.println("\n\nHello, World!");
  Serial.println("\n\nAlexei Ougriniouk Student ID : 000776331");
  Serial.print("ESP Chip ID: ");
  Serial.println(ESP.getChipId());
  Serial.print("FLASH Chip ID: ");
  Serial.println(ESP.getFlashChipId());

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Time(MS): ");
  myTime = millis();

  Serial.println(myTime); 
  delay(2000);      
}