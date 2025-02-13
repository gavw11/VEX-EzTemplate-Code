#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"


extern Drive chassis;
// Your motors, sensors, etc. should go here.  Below are examples
inline ez::Piston mogo_clamp('A');
// Use the appropriate port number

void clamp_control();
void auton_clamp();