#include "SelectCharacters.h"

void SelectCharacters::Titile() {
	thread Sound(SoundSelectCharacters);
	gotoXY(WidthConsole/2.5,2);
	textColor(6);
	string s = "* Vui long chon nhan vat *";
	for (int i = 0; i < s.size(); i++) {
		cout << s[i];
		Sleep(45);
	}
	Sound.join();
}
void SelectCharacters::painMenu() {
	Box a;
	string s[5];
	int i = 0;
	float ox = WidthConsole*1.0/20;
	float oy = HeightConsole*1.0/ 5.5;
	float d = WidthConsole * 1.0 / 5; 
	float k = HeightConsole * 1.0 / 4;
	string file = "TieuLongNu.txt";
	a.Set(ox, oy, 28, 5, 3, "");
	a.VeBox();
	a.inNhanVat(ox, oy,file);
	file = "DuongQua.txt";
	ox += d;
	a.Set(ox, oy, 28, 5, 3, "");
	a.VeBox();
	a.inNhanVat(ox, oy,file);
	ox += d;
	a.Set(ox, oy, 28, 5, 3, "");
	a.VeBox();
	file = "QuachTinh.txt";
	a.inNhanVat(ox, oy, file);
	ox += d;
	a.Set(ox, oy, 28, 5, 3, "");
	a.VeBox();
	file = "AuDuongPhong.txt";
	a.inNhanVat(ox, oy, file);
	ox += d;
	a.Set(ox, oy, 28, 5, 3, "");
	a.VeBox();
	file = "DoanChiBinh.txt";
	a.inNhanVat(ox, oy, file);
	ox= WidthConsole * 1.0 / 20;
	oy += k;
	a.Set(ox, oy, 28, 5, 3, "");
	a.VeBox();
	file = "KieuPhong.txt";
	a.inNhanVat(ox, oy, file);
	ox += d;
	a.Set(ox, oy, 28, 5, 3, "");
	a.VeBox();
	file = "HuTuc.txt";
	a.inNhanVat(ox, oy, file);
	ox += d;
	a.Set(ox, oy, 28, 5, 3, "");
	a.VeBox();
	file = "DoanDu.txt";
	a.inNhanVat(ox, oy, file);
	ox += d;
	a.Set(ox, oy, 28, 5, 3, "");
	a.VeBox();
	file = "TruongVoKi.txt";
	a.inNhanVat(ox, oy, file);
	ox += d;
	a.Set(ox, oy, 28, 5, 3, "");
	a.VeBox();
	file = "LyMacSau.txt";
	a.inNhanVat(ox, oy, file);
}