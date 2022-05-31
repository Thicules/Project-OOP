#pragma once
#include "Total.h"
#include <iostream>
#include <string>
using namespace std;

class NhanVat {
protected:
	NhanVat() { CapDo = 1; }
	~NhanVat() {};
	string TenNhanVat;
	string MonPhai;
	int CapDo = 1;
	int SatThuong; 
	string He;
public:
	string getHe();
	int getSatThuong();  // Sat thương chưa tính hệ 
	/*void coutThongTin() {};*/
	friend class XuLi;
	void upLV(string);
	void coutNhanVat();
};
class TieuLongNu :public NhanVat {  //tiểu long nữ
public:
	TieuLongNu();
};
class DuongQua :public NhanVat { //Dương Quá
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
class TruongVoKi :public NhanVat { //Trương Vô Kị
public:
	TruongVoKi();
};
class LyMacSau :public NhanVat { //Lý Mạc Sầu
public:
	LyMacSau();
};

string kiemtraHe(string MonPhai); // Chọn môn phái  từ hệ 

int RandLV1();
int RandLV2();