#pragma once
#include "Total.h"
#include <iostream>
#include <string>
using namespace std;

class NhanVat {
protected:
	string TenNhanVat; 
	string MonPhai;   
	int CapDo;       
	int SatThuong;
	double SatThuongLenQuai;
	string He;
public:
	NhanVat();
	string getHe();
	int getSatThuong();  // Sat thương chưa tính hệ 
	int getSatThuongLenQuai(string HeQuai); //Sát thương gây lên quái có "He"
	void coutThongTin();
	virtual void test() = 0;
	friend class XuLi;
};
class TieuLongNu :public NhanVat {  //tiểu long nữ
public:
	TieuLongNu();
};
class DuongQua:public NhanVat { //Dương Quá
public:
	DuongQua();
};
class QuachTinh :public NhanVat { //Quách Tĩnh
public:
	QuachTinh();
};
class AuDuongPhong :public NhanVat { //Âu Dương Phong
public:
	AuDuongPhong();
};
class DoanChiBinh :public NhanVat { //Doãn Chí Bình
public:
	DoanChiBinh();
};
class KieuPhong :public NhanVat { //Kiều Phong
public:
	KieuPhong();
};
class HuTuc :public NhanVat { //Hư Túc
public:
	HuTuc();
};
class DoanDu :public NhanVat { //Đoàn Dự
public:
	DoanDu();
};
class TruongVoKi:public NhanVat { //Trương Vô Kị
public:
	TruongVoKi();
};
class LyMacSau :public NhanVat { //Lý Mạc Sầu
public:
	LyMacSau();
};

string kiemtraHe(string MonPhai); // Chọn môn phái  từ hệ 

float TiledameA(string HeA, string HeB); // Tỉ lệ dame Hệ A gây lên Hệ B