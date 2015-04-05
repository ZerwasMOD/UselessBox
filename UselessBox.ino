#include <USELESSBOX.h>
#include <Servo.h>

USELESSBOX box;

void setup() {
  box.initialise(9,10,2);
  box.initLidServo(50,120);
  box.initSwitchServo(90,180);
  box.standby();
}

void loop() {
     box.run();
}
