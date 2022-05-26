#pragma once
#include <iostream>
#include <string>
#include "Total.h"
using namespace std;

class QuaiVat
{
protected:
	string TenQuai;  // Nhập từ bàn phím
	int CapDo;		 // Nhập từ bàn phím	
	string He;		 // Nhập từ bàn phím
	int SatThuong;
	double SatThuongLenNhanVat;
public:
	virtual int getSatThuong() = 0;
	int getSatThuongLenNhanVat(string HeNhanVat);
	virtual void coutThongTin() = 0;
	string getHe();
};

class Quaithuong :public QuaiVat
{
public:
	int getSatThuong();
	void coutThongTin();
};

class QuaiDauLinh :public QuaiVat
{
public:
	int getSatThuong();
	void coutThongTin();

};