#include "SelectCharacters.h"

void SelectCharacters::Titile() {
	thread Sound(SoundSelectCharacters);
	gotoXY(5, 5);
	textColor(6);
	string s = "* Vui long chon nhan vat *";
	for (int i = 0; i < s.size(); i++) {
		cout << s[i];
		Sleep(45);
	}
	Sound.join();
}
void SelectCharacters::painMenu() {
	ifstream fi;
	fi.open("TieuLongNu.txt");
	Box a;
	string s;
	getline(fi, s);
	a.Set(20, 20, 20,5,3,s);
	a.VeBox();
	system("pause");
}