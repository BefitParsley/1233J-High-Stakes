using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor BL;
extern motor FL;
extern motor FR;
extern motor ML;
extern motor MR;
extern motor BR;
extern motor Intake;
extern controller Controller1;
extern digital_out Right_Wing;
extern digital_out Claw_Up;
extern digital_out Claw;
extern digital_out Mogo;
extern motor Arm;
extern rotation Arm_Rotation;
extern inertial Inertial6;
extern digital_out Hang;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );