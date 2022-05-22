#pragma once

#include"Header.h"
#include"Quaivat.h"

class NhanVat
{
	string TenNhanVat;
	string MonPhai;
	int CapDo;
	int SatThuong;
	string He;
public:
	friend int getSatThuong(QuaiVat);
	int getSatThuong();
	void coutThongTin();
};

