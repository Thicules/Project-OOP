#pragma once
#include <iostream>
#include <string>
#include "Total.h"
#include "XuLi.h"
using namespace std;

class QuaiVat {
protected:
	string TenQuai;
	int CapDo;
	string He;
	int SatThuong;
public:
	QuaiVat();
	~QuaiVat()
	{

	};
	void setLV(int a);  // Nhận lv để bắt đầu tạo quái
	int getLV();   // Lấy LV để random quái tiếp theo;
	string getTenQuai();
	virtual int getSatThuong() = 0;
	//virtual void coutThongTin() = 0;
	string getHe();
	friend class XuLi;
	virtual void upLV() = 0;
	void coutQuaiVat();
};

class QuaiThuong :public QuaiVat
{
public:
	QuaiThuong();
	int getSatThuong();
	//void coutThongTin() ;
	void upLV();
};

class QuaiDauLinh :public QuaiVat
{
public:
	QuaiDauLinh();
	int getSatThuong();
	//void coutThongTin() ;
	void upLV();

};

int RandLV3();
string RandHe();