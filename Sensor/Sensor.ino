
#include <NewPing.h>
 
//#define TRIGGER_PIN 11
//#define ECHO_PIN 12
//#define MAX_DISTANCE 200

// NewPing setup of pins and maximum distance
//NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); 
 NewPing sonar (11, 12, 2000);
  void setup() {
    Serial.begin(200);
    delay(50);
  }
 
void loop() {
   unsigned int distance = sonar.ping_cm();
   Serial.print(distance);
   Serial.println("cm");
   delay(50);
}
