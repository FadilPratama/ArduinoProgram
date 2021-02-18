#include <Servo.h>
Servo servo1;
int pos = 0;

void setup() {
  servo1.attach(6);
}

void loop() {
 for(pos = 0; pos <=90; pos++)
 {
  servo1.write(pos);
  delay(100);
 }

 for(pos = 90; pos >=0; pos--)
 {
  servo1.write(pos);
  delay(100);
 }
}
