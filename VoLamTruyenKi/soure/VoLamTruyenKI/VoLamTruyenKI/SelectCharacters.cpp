#include "SelectCharacters.h"

void SelectCharacters::Titile() {
	thread Sound(SoundSelectCharacters);
	gotoXY(5, 5);
	textColor(14);
	string s = "* Vui long chon nhan vat *";
	for (int i = 0; i < s.size(); i++) {
		cout << s[i];
		Sleep(45);
	}
	Sound.join();
}