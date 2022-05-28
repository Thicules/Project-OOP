#pragma once
#include <iostream>
#include <string>
#include "Total.h"
#include "XuLi.h"
using namespace std;

class QuaiVat{
protected:
	string TenQuai; 
	int CapDo;	
	string He;
	int SatThuong;
	double SatThuongLenNhanVat;
public:
	virtual int getSatThuong() = 0;
	int getSatThuongLenNhanVat(string HeNhanVat);
	virtual void coutThongTin() = 0;
	string getHe();
	friend class XuLi;
};

class Quaithuong :public QuaiVat
{
public:
	int getSatThuong();
	void coutThongTin() {};
};

class QuaiDauLinh :public QuaiVat
{
public:
	int getSatThuong();
	void coutThongTin() {};

};