#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor BL = motor(PORT4, ratio6_1, true);
motor FL = motor(PORT3, ratio6_1, true);
motor FR = motor(PORT8, ratio6_1, false);
motor ML = motor(PORT2, ratio6_1, true);
motor MR = motor(PORT9, ratio6_1, false);
motor BR = motor(PORT10, ratio6_1, false);
motor Intake = motor(PORT11, ratio6_1, true);
controller Controller1 = controller(primary);
digital_out Right_Wing = digital_out(Brain.ThreeWirePort.E);
digital_out Claw_Up = digital_out(Brain.ThreeWirePort.H);
digital_out Claw = digital_out(Brain.ThreeWirePort.G);
digital_out Mogo = digital_out(Brain.ThreeWirePort.A);
motor Arm = motor(PORT20, ratio36_1, true);
rotation Arm_Rotation = rotation(PORT7, false);
inertial Inertial6 = inertial(PORT6);
digital_out Hang = digital_out(Brain.ThreeWirePort.C);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;
// define variables used for controlling motors based on controller inputs
bool Controller1LeftShoulderControlMotorsStopped = true;

// define a task that will handle monitoring inputs from Controller1
int rc_auto_loop_function_Controller1() {
  // process the controller input every 20 milliseconds
  // update the motors based on the input values
  while(true) {
    if(RemoteControlCodeEnabled) {
      // check the ButtonL1/ButtonL2 status to control Arm
      if (Controller1.ButtonL1.pressing()) {
        Arm.spin(forward);
        Controller1LeftShoulderControlMotorsStopped = false;
      } else if (Controller1.ButtonL2.pressing()) {
        Arm.spin(reverse);
        Controller1LeftShoulderControlMotorsStopped = false;
      } else if (!Controller1LeftShoulderControlMotorsStopped) {
        Arm.stop();
        // set the toggle so that we don't constantly tell the motor to stop when the buttons are released
        Controller1LeftShoulderControlMotorsStopped = true;
      }
    }
    // wait before repeating the process
    wait(20, msec);
  }
  return 0;
}

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  task rc_auto_loop_task_Controller1(rc_auto_loop_function_Controller1);
}