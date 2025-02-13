#include "main.h"

void intake_control(){
    if (master.get_digital(DIGITAL_R1)) {
        intake.move_velocity(550);
        }
    else if (master.get_digital(DIGITAL_L1)) {
    intake.move(-550); 
    }
    else {
    intake.move_velocity(0);
    }
}