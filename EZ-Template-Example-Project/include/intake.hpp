#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;
// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor intake(1);

void intake_control();