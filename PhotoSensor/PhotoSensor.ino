#include "photoSensorCode.h"

//Set the pin which is connected to the sensor
const int lightPin = 5;
int value = 0;

void setup() {
  //calibrate the sensor to avoid inaccuracy
  //NB! this can only be done to one of your inputs
  calibrate(lightPin);
}

void loop() {
  if(bright(lightPin)) {
    //write what happens when the surroundings are very bright
    //getValue returns the amount of light registered by the sensor as a number between 0 (dark) and 100 (bright)
    value = getValue(lightPin);
   } else if (dark(lightPin)) {
    //write what happens if the surroundings are very dark
    value = -1*getValue(lightPin);
   } else {
    //write what happens if the surroundings are neither vert bright nor very dark
    value = 0;
   }
}
