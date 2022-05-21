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
	friend int QuaiVat::getSatThuong(NhanVat);
	int getSatThuong();
	void coutThongTin();
};

