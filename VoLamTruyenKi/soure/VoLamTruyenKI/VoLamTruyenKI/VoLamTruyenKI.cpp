#include "Header.h"
int main()
{
	backgroundColor(15);
	//NhanVat* NV;
	//QuaiVat* QV;
	fullScreen(); // Chỉnh toàn bộ màn hình
	removeScrollBar(); // xóa thanh cuộn
	getWHConsole(); // lấy ra biến toàn cục của width và height của màn hình hiện tại
	hideCur(); // ẩn trỏ chuột
	Intro x;
	x.Out();
	SelectCharacters c;
	clrscr();
	c.Titile();
	return 0;
}