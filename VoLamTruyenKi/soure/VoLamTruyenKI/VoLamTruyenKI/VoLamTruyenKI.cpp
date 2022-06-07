#include "Header.h"
int main()
{
	backgroundColor(15);
	//QuaiVat* QV;
	fullScreen(); // Chỉnh toàn bộ màn hình
	removeScrollBar(); // xóa thanh cuộn
	getWHConsole(); // lấy ra biến toàn cục của width và height của màn hình hiện tại
	hideCur(); // ẩn trỏ chuột
	string Name;
	Intro i;
	i.Out();
	clrscr();
	gotoXY(WidthConsole / 2.5, HeightConsole / 2.5);
	textColor(3);
	cout << "Nhap ten nguoi choi: ";
	getline(cin, Name);
	clrscr();
	while (1) {
		SelectCharacters c;
		clrscr();//xóa màn hình
		c.Titile();
		c.painMenu();
		string NV = "";
		c.select(NV);
		clrscr();
		srand((int)NULL(time));
		XuLi GAME;
		GAME.intro();
		GAME.KhoiTaoNhanVat(NV);
		GAME.Start();
		clrscr();
		Box a;
		gotoXY(WidthConsole / 2.5 - 3, HeightConsole / 2 - 2);
		cout << "Ban co muon thu lai vo lam truyen ki khong?";
		a.Set(WidthConsole / 2.5, HeightConsole / 2, 10, 4, 4, "Tiep tuc");
		a.VeBox();
		a.Set(WidthConsole / 2.5 + 22, HeightConsole / 2, 10, 4, 4, "Thoat");
		a.VeBox();
		int x = WidthConsole / 2.5;
		int y = HeightConsole / 2;
		int ox = WidthConsole / 2.5;
		int oy = HeightConsole / 2;
		while (1) {
			Box choose;
			choose.Set(ox, oy);
			choose.VeBoxChon();
			if (_kbhit()) {
				char key = _getch();
				if (key == 77 & ox != x + 22) {
					choose.XoaChon();
					ox += 22;
				}
				else if (key == 75 & ox != x) {
					choose.XoaChon();
					ox -= 22;
				}
				else if (key == 13) {
					if (ox == x) {
						clrscr();
						break;
					}
					else {
						clrscr();
						exit(0);
					}
				}
			}
		}
	} 
	return 0;
}