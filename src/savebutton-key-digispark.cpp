
#include "DigiKeyboard.h"


void keyboardSetup() {
  // nop
}


void keyboardSendSave() {
  DigiKeyboard.sendKeyStroke(0);
  delay(100);
  DigiKeyboard.print("Digi"); 
  delay(100);
}
