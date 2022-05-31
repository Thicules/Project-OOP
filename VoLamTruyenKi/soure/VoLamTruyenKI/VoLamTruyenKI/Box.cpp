#include "Box.h"

Box::Box() {
	this->x = this->y = this->w = this->h = 0;
	this->tColor = 1;
	this->text = "";
}
Box::~Box() {
	this->x = this->y = this->w = this->h = 0;
	this->tColor = 1;
	this->text = "";
}

void Box::Set(int x, int y, int w, int h, int tColor, string text) {
	this->x = x;
	this->y = y;
	this->w = w;
	this->h = h;
	this->tColor = tColor;
	this->text = text;
}
void Box::VeBox() {
	textColor(this->tColor);
	int i;
	for (i = 0; i <= this->w; i++)
	{
		gotoXY(this->x + i, this->y);
		cout << '_';
		gotoXY(this->x + i, this->y + this->h);
		cout << '_';
	}
	for (i = 0; i <= this->h; i++)
	{
		gotoXY(this->x, this->y + i);
		cout << '|';
		gotoXY(this->x + this->w, this->y + i);
		cout << '|';
	}
	gotoXY(this->x, this->y);
	cout << " ";
	gotoXY(this->x + this->w, this->y);
	cout << " ";
	gotoXY(this->x, this->y + this->h);
	cout << " ";
	gotoXY(this->x + this->w, this->y + this->h);
	cout << " ";
	this->InChuoi();
	gotoXY(this->x + this->w+1, this->y + this->h+1);
}
void Box::VeBoxChon() {
	gotoXY(this->x -2, this->y + 2);
	textColor(10);
	cout << ">>";
}

void Box::InChuoi() {
	textColor(this->tColor);
	gotoXY(this->x + 1, this->h / 2 + this->y);
	cout << this->text;
	textColor(7);
}

void Box::inNhanVat(int x, int y, string file) {
	ifstream fi;
	int i = 0;
	fi.open(file);
	string s[4];
	while (!fi.eof()) {
		getline(fi, s[i]);
		i++;
	}
	for (int i = 0; i <= 3; i++) {
		gotoXY(x + 1, y + 1 + i);
		textColor(4);
		cout << s[i] << endl;
	}
	fi.close();
}
void Box::Set(int ox, int oy) {
	x = ox;
	y = oy;
}
void Box::XoaChon() {
	gotoXY(this->x - 2, this->y + 2);
	cout <<"  ";
}
int Box::getX() {
	return this->x;
}
int Box::getY() {
	return this->y;
}