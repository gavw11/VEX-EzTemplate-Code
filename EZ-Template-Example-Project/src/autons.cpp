#include "main.h"

/////
// For installation, upgrading, documentations, and tutorials, check out our website!
// https://ez-robotics.github.io/EZ-Template/
/////

// These are out of 127
const int DRIVE_SPEED = 110;
const int TURN_SPEED = 90;
const int SWING_SPEED = 110;


void default_constants() {
  // P, I, D, and Start I
  chassis.pid_drive_constants_set(20.0, 0.0, 100.0);         // Fwd/rev constants, used for odom and non odom motions
  chassis.pid_heading_constants_set(11.0, 0.0, 20.0);        // Holds the robot straight while going forward without odom
  chassis.pid_turn_constants_set(3.0, 0.05, 20.0, 15.0);     // Turn in place constants
  chassis.pid_swing_constants_set(6.0, 0.0, 65.0);           // Swing constants

  // Exit conditions
  chassis.pid_turn_exit_condition_set(90_ms, 3_deg, 250_ms, 7_deg, 500_ms, 500_ms);
  chassis.pid_swing_exit_condition_set(90_ms, 3_deg, 250_ms, 7_deg, 500_ms, 500_ms);
  chassis.pid_drive_exit_condition_set(90_ms, 1_in, 250_ms, 3_in, 500_ms, 500_ms);
  chassis.pid_turn_chain_constant_set(3_deg);
  chassis.pid_swing_chain_constant_set(5_deg);
  chassis.pid_drive_chain_constant_set(3_in);

  // Slew constants
  chassis.slew_turn_constants_set(3_deg, 70);
  chassis.slew_drive_constants_set(3_in, 70);
  chassis.slew_swing_constants_set(3_in, 80);
}

void test() {
  chassis.pid_drive_set(24_in, DRIVE_SPEED, true);
  chassis.pid_wait();

  chassis.pid_turn_set(-90, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(24_in, DRIVE_SPEED, true);
  chassis.pid_wait();


}


void test2(){
  lb.move_absolute(870.0, 100.0);
  pros::delay(500);
  lb.move_absolute(0.0, 50.0);
  pros::delay(500);

  chassis.pid_drive_set(-27.00_in, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_drive_set(-4.00_in, DRIVE_SPEED*0.55 , true);
  chassis.pid_wait();
  mogo_clamp.set(true);
  chassis.pid_wait();

 
  pros::delay(500);
  
  chassis.pid_turn_set(170_deg, TURN_SPEED);
  chassis.pid_wait();

  intake.move(-550);
  chassis.pid_drive_set(33.50_in, DRIVE_SPEED, true);
  chassis.pid_wait();

  pros::delay(500);

  chassis.pid_turn_relative_set(-34_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(15.00_in, DRIVE_SPEED, true);
  chassis.pid_wait();

  pros::delay(3000);
}

void test3(){
  lb.move_absolute(870.0, 100.0);
  pros::delay(500);
  lb.move_absolute(0.0, 50.0);
  pros::delay(500);

  chassis.pid_drive_set(-27.00_in, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_drive_set(-4.00_in, DRIVE_SPEED*0.55 , true);
  chassis.pid_wait();
  mogo_clamp.set(true);
  chassis.pid_wait();

 
  pros::delay(500);
  
  chassis.pid_turn_set(-170_deg, TURN_SPEED);
  chassis.pid_wait();

  intake.move(-550);
  chassis.pid_drive_set(33.50_in, DRIVE_SPEED, true);
  chassis.pid_wait();

  pros::delay(500);

  chassis.pid_turn_relative_set(34_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(15.00_in, DRIVE_SPEED, true);
  chassis.pid_wait();

  pros::delay(3000);
}
