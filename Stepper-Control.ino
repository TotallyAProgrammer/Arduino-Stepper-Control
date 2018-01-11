#include <Stepper.h>

#define STEPS 100 //You can changes this to what ever value you need.

int potval = 0;

Stepper stepper(STEPS, 8, 9, 10, 11); //This is what creates the link to the ports, 8, 9, 10, and 11

void setup() {
  stepper.setSpeed(30); //This sets the speed of the stepper
}

void loop() {
  potval = analogRead(0); //This reads the potentiometer value
  stepper.setSpeed(potval / 10); //This divides the potval by 10 so it can be used by the stepper
  stepper.step(STEPS); //This tells the stepper to step by STEPS
}
