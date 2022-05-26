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
	string getHe();
	int getSatThuong();  // Sat thương chưa tính hệ 
	int getSatThuongLenQuai(string HeQuai); //Sát thương gây lên quái có "He"
	void coutThongTin();
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
class ViTieuBao :public NhanVat { //Vi Tiểu Bảo
public:
	ViTieuBao();
};
class DocCoCauBai :public NhanVat { //Độc Cô Cầu Bại
public:
	DocCoCauBai();
};

string kiemtraHe(string MonPhai); // Chọn môn phái  từ hệ 

float TiledameA(string HeA, string HeB); // Tỉ lệ dame Hệ A gây lên Hệ B