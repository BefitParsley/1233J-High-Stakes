#include "vex.h"
bool MOut = false;
bool Buttonbpressed = false;
bool ButtonYpressed = false;
bool ButtonRpressed = false;
bool ButtonDpressed = false;
bool BROut = false; 
bool COut = false;
bool ClOut = false;

void Mogo_Cont(){
  bool Buttonb = Controller1.ButtonB.pressing(); 
  if (Buttonb && !Buttonbpressed) {
    MOut = !MOut; 
    Mogo.set(MOut);
    Buttonbpressed = true;
  }
  else if (!Buttonb) {
      Buttonbpressed = false;
    }
}
void Hang_Cont(){
  bool Buttony = Controller1.ButtonY.pressing(); 
  if (Buttony && !ButtonYpressed) {
    BROut = !BROut; 
    Hang.set(BROut);
    ButtonYpressed = true;
  }
  else if (!Buttony) {
      ButtonYpressed = false;
    }
}
void Claw_Cont(){
  bool ButtonR = Controller1.ButtonRight.pressing(); 
  if (ButtonR && !ButtonRpressed) {
    ClOut = !ClOut; 
    Claw_Up.set(ClOut);
    ButtonRpressed = true;
  }
  else if (!ButtonR) {
      ButtonRpressed = false;
    }
}
void Claw2_Cont(){
  bool ButtonD = Controller1.ButtonDown.pressing(); 
  if (ButtonD && !ButtonDpressed) {
    COut = !COut; 
    Claw.set(COut);
    ButtonDpressed = true;
  }
  else if (!ButtonD) {
      ButtonDpressed = false;
    }
}