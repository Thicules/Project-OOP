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
	string s[5];
	int i = 0;
	int ox = WidthConsole*1.0/20;
	int oy = HeightConsole*1.0/ 5.5;
	int d = WidthConsole * 1.0 / 5; 
	int k = HeightConsole * 1.0 / 4;
	string file = "TieuLongNu.txt";
	a[0].Set(ox, oy, 28, 5, 3, "");
	a[0].VeBox();
	a[0].inNhanVat(ox, oy,file);
	file = "DuongQua.txt";
	ox += d;
	a[1].Set(ox, oy, 28, 5, 3, "");
	a[1].VeBox();
	a[1].inNhanVat(ox, oy,file);
	ox += d;
	a[2].Set(ox, oy, 28, 5, 3, "");
	a[2].VeBox();
	file = "QuachTinh.txt";
	a[2].inNhanVat(ox, oy, file);
	ox += d;
	a[3].Set(ox, oy, 28, 5, 3, "");
	a[3].VeBox();
	file = "AuDuongPhong.txt";
	a[3].inNhanVat(ox, oy, file);
	ox += d;
	a[4].Set(ox, oy, 28, 5, 3, "");
	a[4].VeBox();
	file = "DoanChiBinh.txt";
	a[4].inNhanVat(ox, oy, file);
	ox= WidthConsole * 1.0 / 20;
	oy += k;
	a[5].Set(ox, oy, 28, 5, 3, "");
	a[5].VeBox();
	file = "KieuPhong.txt";
	a[5].inNhanVat(ox, oy, file);
	ox += d;
	a[6].Set(ox, oy, 28, 5, 3, "");
	a[6].VeBox();
	file = "HuTuc.txt";
	a[6].inNhanVat(ox, oy, file);
	ox += d;
	a[7].Set(ox, oy, 28, 5, 3, "");
	a[7].VeBox();
	file = "DoanDu.txt";
	a[7].inNhanVat(ox, oy, file);
	ox += d;
	a[8].Set(ox, oy, 28, 5, 3, "");
	a[8].VeBox();
	file = "TruongVoKi.txt";
	a[8].inNhanVat(ox, oy, file);
	ox += d;
	a[9].Set(ox, oy, 28, 5, 3, "");
	a[9].VeBox();
	file = "LyMacSau.txt";
	a[9].inNhanVat(ox, oy, file);
}
void  SelectCharacters::select(string& NV) {
	int ox= WidthConsole / 20;
	int x = ox;
	int oy = HeightConsole * 1.0 / 5.5;
	int y = oy;
	int d = WidthConsole * 1.0 / 5;
	int k = HeightConsole * 1.0 / 4;
	Box Choose;
	//showCur();
	Choose.Set(x, y);
	Choose.VeBoxChon();
	while (1){
		if (_kbhit()) {
			char key = _getch();
			if (key == 77&&x!=ox+4*d) {//right
				Choose.XoaChon();
				x += d;
				Choose.Set(x, y);
				Choose.VeBoxChon();
			}
			else if (key == 80&&y!=oy+k) {//down
				Choose.XoaChon();
				y += k;
				Choose.Set(x, y);
				Choose.VeBoxChon();
			}
			else if (key == 75&&x!=ox) {//left
				Choose.XoaChon();
				x -= d;
				Choose.Set(x, y);
				Choose.VeBoxChon();
			}
			else if (key == 72 && y!=oy) {//up
				Choose.XoaChon();
				y -= k;
				Choose.Set(x, y);
				Choose.VeBoxChon();
			}
			else if (key == 13) {//enter
				if (x == a[0].getX() && a[0].getY() == y)
					NV = "Tieu Long Nu";
				else if (x == a[1].getX() && a[1].getY() == y)
					NV = "Duong Qua";
				else if (x == a[2].getX() && a[2].getY() == y)
					NV = "Quach Tinh";
				else if (x == a[3].getX() && a[3].getY() == y)
					NV = "Au Duong Phong";
				else if (x == a[4].getX() && a[4].getY() == y)
					NV = "Doan Chi Binh";
				else if (x == a[5].getX() && a[5].getY() == y)
					NV = "Kieu Phong";
				else if (x == a[6].getX() && a[6].getY() == y)
					NV = "Hu Tuc";
				else if (x == a[7].getX() && a[7].getY() == y)
					NV = "Doan Du";
				else if (x == a[8].getX() && a[8].getY() == y)
					NV = "Truong Vo Ki";
				else if (x == a[9].getX() && a[9].getY() == y)
					NV = "Ly Mac Sau";
				break;
			}
		}
	}
}