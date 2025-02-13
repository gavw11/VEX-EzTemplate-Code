#include "main.h"

bool isClamped = false;

void clamp_control(){

    if (master.get_digital(DIGITAL_DOWN)){
        isClamped = !isClamped;
        mogo_clamp.set(isClamped);
        pros::delay(200);  // Delay to debounce the button press
      }
}

void auton_clamp(){
  mogo_clamp.set(true);
}