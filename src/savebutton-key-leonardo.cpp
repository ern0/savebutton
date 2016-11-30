
#include <Keyboard.h>


void keyboardSetup() {
	Keyboard.begin();
}


void keyboardSendSave() {

	Keyboard.press('l');
	Keyboard.releaseAll();
  delay(100);

	Keyboard.press('e');
	Keyboard.releaseAll();
  delay(100);

	Keyboard.press('o');
	Keyboard.releaseAll();

}
