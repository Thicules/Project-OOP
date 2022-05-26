#pragma once
#include <iostream>
#include <string>
#include "Total.h"
using namespace std;

class Quaivat
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

class Quaithuong :public Quaivat
{
public:
	int getSatThuong();
	void coutThongTin();
};

class QuaiDauLinh :public Quaivat
{
public:
	int getSatThuong();
	void coutThongTin();

};