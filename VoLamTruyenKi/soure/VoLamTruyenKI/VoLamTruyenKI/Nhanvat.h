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
	string He;
public:
	int getSatThuong(QuaiVat a);
	int getSatThuong();
	void coutThongTin();
};