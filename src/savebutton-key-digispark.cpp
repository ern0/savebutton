#include "DigiKeyboard.h"
#include "savebutton.hpp"


void keyboardSetup() {
	// empty
} // keyboardSetup()


void keyboardSendSave() {

	DigiKeyboard.sendKeyStroke(0);
  delay(100);

	if (modkey == MODKEY_CONTROL) {
		DigiKeyboard.sendKeyStroke(KEY_S,MOD_CONTROL_LEFT);
	} else {
		DigiKeyboard.sendKeyStroke(KEY_S,MOD_GUI_LEFT);
	} 

} // keyboardSendSave()