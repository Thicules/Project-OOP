#include"Quaivat.h"
#include "Nhanvat.h"

string Quaivat::getHe()
{
	return He;
}

int Quaithuong::getSatThuong()
{
	SatThuong = CapDo * 3;
	return SatThuong;
}

int QuaiDauLinh::getSatThuong()
{
	SatThuong = CapDo * 3;
	return SatThuong;
}

int Quaivat::getSatThuongLenNhanVat(string HeNhanVat)
{
	SatThuongLenNhanVat = (SatThuong * 1.0) * TiledameA(He, HeNhanVat);
	return int(SatThuongLenNhanVat);
}