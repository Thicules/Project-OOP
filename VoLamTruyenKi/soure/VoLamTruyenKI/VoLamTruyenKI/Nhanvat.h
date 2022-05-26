#pragma once
#include "Total.h"
#include <iostream>
#include <string>
using namespace std;

class Nhanvat {
protected:
	string TenNhanVat; // Nhập vào từ bàn phím
	string MonPhai;   // Nhập vào từ bàn phím
	int CapDo;        // Nhập vào từ bàn phím
	int SatThuong;
	double SatThuongLenQuai;
	string He;
public:
	string getHe();
	int getSatThuong();  // Sat thương chưa tính hệ 
	int getSatThuongLenQuai(string HeQuai); //Sát thương gây lên quái có "He"
	void coutThongTin();
};

string kiemtraHe(string MonPhai); // Chọn môn phái  từ hệ 

float TiledameA(string HeA, string HeB); // Tỉ lệ dame Hệ A gây lên Hệ B