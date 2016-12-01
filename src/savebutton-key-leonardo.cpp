#include <Keyboard.h>
#include "savebutton.hpp"


void keyboardSetup() {
	Keyboard.begin();
} // keyboardSetup()


void keyboardSendSave() {

	if (getModKey() == MODKEY_CONTROL) {
		Keyboard.press(KEY_LEFT_CTRL);
	} else {
		Keyboard.press(KEY_LEFT_GUI);
	}
	Keyboard.press('s');

	delay(100);

	Keyboard.releaseAll();

} // keyboardSendSave()

