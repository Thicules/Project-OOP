#pragma once

#include "Header.h"
#include "Nhanvat.h"

class QuaiVat
{
protected:
	string TenQuai;
	int CapDo;
	string He;
	int SatThuong;
public:
	friend int getSatThuong(NhanVat);
	virtual int getSatThuong();
	virtual void coutThongTin();
};

class QuaiThuong :public QuaiVat
{
public:
	int getSatThuong();
	void coutThongTin();
};

class DauLinh :public QuaiVat
{
public:
	int getSatThuong();
	void coutThongTin();
};