#pragma once
#include "Graphics.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Box{
private:
	int x, y, w, h, tColor;
	string text;
public:
	Box();
	~Box();
	void Set(int, int);
	// x, y, w, h, tColor, text
	void Set(int, int, int, int, int, string);
	void VeBox();
	void VeBoxChon();
	void InChuoi();
	void XoaChon();
	int getX();
	int getY();
	void inNhanVat(int x, int y, string file);
};