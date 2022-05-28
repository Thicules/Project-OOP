#include"QuaiVat.h"

string QuaiVat::getHe()
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

int QuaiVat::getSatThuongLenNhanVat(string HeNhanVat)
{
	SatThuongLenNhanVat = (SatThuong * 1.0) * TiledameA(He, HeNhanVat);
	return int(SatThuongLenNhanVat);
}