#include <SoftwareSerial.h>

void setup() {                
    pinMode(13, OUTPUT);     
    Serial.begin(9600);
}

void loop() {

  byte cmd = 0;
  boolean haveEverHeard = false;

  if (Serial.available() > 0) {
    cmd = Serial.read();
    haveEverHeard = true;
  }

  // if (cmd == 'G') {
  if (haveEverHeard == true) {
  	digitalWrite(13, HIGH);
  }
}
