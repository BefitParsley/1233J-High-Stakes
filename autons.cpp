#include "vex.h"

void default_constants(){
  chassis.set_drive_constants(10, 1.5, 0, 10, 0);
  chassis.set_heading_constants(6, .4, 0, 1, 0);
  chassis.set_turn_constants(12, .4, .03, 3, 15);
  chassis.set_swing_constants(12, .3, .001, 2, 15);
  chassis.set_drive_exit_conditions(1.5, 300, 0);
  chassis.set_turn_exit_conditions(1, 300, 0);
  chassis.set_swing_exit_conditions(1, 300, 0);
}

void odom_constants(){
  default_constants();
  chassis.drive_max_voltage = 8;
  chassis.drive_settle_error = 3;
}

void drive_test(){
  Intake.setVelocity(100, percent);
  Intake.setMaxTorque(100, percent);
  chassis.turn_to_angle(40);
  chassis.drive_distance(-16);
  Mogo.set(true);
  chassis.turn_to_angle(180);
  Intake.spin(forward);
  chassis.drive_distance(25);
  chassis.turn_to_angle(-90);
  chassis.drive_distance(23);
  chassis.turn_to_angle(0);
  chassis.drive_max_voltage = 3;
  chassis.drive_distance(27);
  chassis.drive_distance(-7.5);
  chassis.turn_to_angle(-90);
  chassis.drive_distance(10);
  chassis.turn_to_angle(150);
  chassis.drive_distance(-14);
  Mogo.set(false);
  chassis.drive_max_voltage = 8;
  chassis.drive_distance(11);
  chassis.turn_to_angle(-90);
  chassis.drive_distance(-73);
  chassis.drive_max_voltage = 6;
  chassis.drive_distance(-2);
  Mogo.set(true);
  chassis.drive_distance(-4);
  chassis.turn_to_angle(180);
  chassis.drive_distance(24);
  chassis.turn_to_angle(90);
  chassis.drive_distance(26.5);
  chassis.turn_to_angle(0);
  chassis.drive_max_voltage = 3;
  chassis.drive_distance(26);
  chassis.drive_max_voltage = 10;
  chassis.turn_to_angle(-130);
  chassis.drive_distance(-16);
  wait(1,sec);
  Mogo.set(false);
  chassis.drive_distance(25.5);
  chassis.turn_to_angle(0);
  chassis.drive_distance(-82);
  chassis.turn_to_angle(70);
  chassis.drive_distance(-30);
  chassis.drive_distance(-5);
  Mogo.set(true);
  chassis.turn_to_angle(-20);



  /*//full AWP
  Intake.setVelocity(100,percent);
  Intake.setMaxTorque(100,percent);
  chassis.drive_distance(-16);
  chassis.turn_to_angle(35);
  chassis.drive_distance(-15);
  Mogo.set(true);
  Intake.spin(forward);
  chassis.turn_to_angle(105);
  chassis.drive_distance(18);
  chassis.drive_distance(6);
  chassis.turn_to_angle(-75);
  chassis.drive_distance(61);
  Mogo.set(false);
  chassis.drive_distance(7.55);
  chassis.turn_to_angle(27);
  chassis.drive_distance(-22);
  Mogo.set(true);
  chassis.turn_to_angle(-90);
  chassis.drive_max_voltage = 6;
  chassis.drive_distance(20);
  chassis.turn_to_angle(125);
  chassis.drive_max_voltage = 10;
  chassis.drive_distance(5);
  BL.setBrake(coast);
  FL.setBrake(coast);
  FR.setBrake(coast);
  ML.setBrake(coast);
  MR.setBrake(coast);
  BR.setBrake(coast);
  Mogo.set(false);
  chassis.drive_distance(14.5);*/
}

void turn_test(){
  //red left 4 ring
  Intake.setVelocity(100,percent);
  Intake.setMaxTorque(100, percent);
  chassis.drive_distance(-16);
  chassis.turn_to_angle(35);
  chassis.drive_distance(-16);
  Mogo.set(true);
  Intake.spin(forward);
  chassis.turn_to_angle(105);
  chassis.drive_distance(18);
  chassis.drive_distance(5);
  chassis.drive_distance(-9);
  chassis.turn_to_angle(175);
  chassis.drive_distance(14);
  chassis.drive_distance(-12);
  chassis.turn_to_angle(151);
  chassis.drive_max_voltage = 5;
  chassis.drive_distance(17);
  chassis.drive_max_voltage = 8;
  chassis.drive_distance(-11);
  chassis.turn_to_angle(-100);
  wait(1,sec);
  Mogo.set(false);
  chassis.drive_distance(21.5);
}

void swing_test(){
  //red right 3 ring solo AWP
  Intake.setVelocity(100,percent);
  Intake.setMaxTorque(100,percent);
  Claw_Up.set(true);
  Arm.setBrake(hold);
  Arm.setMaxTorque(100,percent);
  Arm.spinFor(.45,sec);
  chassis.drive_distance(6);
  Claw.set(true);
  chassis.drive_distance(-2);
  Arm.spinFor(1,sec);
  chassis.drive_distance(1);
  chassis.turn_to_angle(55);
  chassis.drive_max_voltage = 7.5;
  chassis.drive_distance(-45);
  Mogo.set(true);
  Intake.spin(forward);
  chassis.turn_to_angle(0);
  chassis.drive_max_voltage = 6;
  chassis.drive_distance(23);
  chassis.drive_distance(-7);
  wait(1,sec);
  chassis.turn_to_angle(-90);
  Mogo.set(false);
  chassis.drive_distance(8);
  Arm.spinFor(reverse, 1.5, seconds);
  Claw.set(false);
  Claw_Up.set(false);
  chassis.drive_distance(-15);
  Intake.stop();
  chassis.turn_to_angle(180);
  chassis.drive_distance(29);
}

void full_test(){
  //Blue Right 4 ring
  Intake.setVelocity(100,percent);
  Intake.setMaxTorque(100, percent);
  chassis.drive_distance(-17);
  chassis.turn_to_angle(-30);
  chassis.drive_distance(-17);
  Mogo.set(true);
  Intake.spin(forward);
  chassis.turn_to_angle(-105);
  chassis.drive_distance(18);
  chassis.drive_distance(5);
  chassis.drive_distance(-8);
  chassis.turn_to_angle(-175);
  chassis.drive_distance(14);
  chassis.drive_distance(-12);
  chassis.turn_to_angle(-151);
  chassis.drive_max_voltage = 5;
  chassis.drive_distance(17);
  chassis.drive_max_voltage = 8;
  chassis.drive_distance(-11);
  chassis.turn_to_angle(100);
  wait(1,sec);
  Mogo.set(false);
  chassis.drive_distance(23.5);
}

void odom_test(){
  //blue left 3 ring solo AWP
  Intake.setVelocity(100,percent);
  Intake.setMaxTorque(100,percent);
  Arm.setBrake(hold);
  Arm.setMaxTorque(100,percent);
  chassis.drive_distance(-10);
  chassis.turn_to_angle(35);
  Claw_Up.set(true);
  Arm.spinFor(.47, sec);
  chassis.drive_distance(9);
  Claw.set(true);
  chassis.drive_distance(-2);
  Arm.spinFor(1,sec);
  chassis.turn_to_angle(43);
  chassis.drive_max_voltage = 6.5;
  chassis.drive_distance(-42);
  Mogo.set(true);
  Intake.spin(forward);
  chassis.turn_to_angle(90);
  chassis.drive_distance(26);
  chassis.drive_distance(-10);
  wait(0.75,sec);
  Mogo.set(false);
  chassis.turn_to_angle(150);
  chassis.drive_distance(6.5);
  Arm.spinFor(reverse,1.5,sec);
  Claw.set(false);
  Claw_Up.set(false);
  chassis.turn_to_angle(-90);
  chassis.drive_distance(30);



}

void tank_odom_test(){
  odom_constants();
  chassis.set_coordinates(0, 0, 0);
  chassis.turn_to_point(24, 24);
  chassis.drive_to_point(24,24);
  chassis.drive_to_point(0,0);
  chassis.turn_to_angle(0);
}

void holonomic_odom_test(){
   chassis.set_coordinates(0, 0, 0);
  while(1){
    Brain.Screen.clearScreen();
    Brain.Screen.printAt(0,50, "X: %f", chassis.get_X_position());
    Brain.Screen.printAt(0,70, "Y: %f", chassis.get_Y_position());
    Brain.Screen.printAt(0,90, "Heading: %f", chassis.get_absolute_heading());
    Brain.Screen.printAt(0,110, "ForwardTracker: %f", chassis.get_ForwardTracker_position());
    Brain.Screen.printAt(0,130, "SidewaysTracker: %f", chassis.get_SidewaysTracker_position());
    task::sleep(20);
  }
}