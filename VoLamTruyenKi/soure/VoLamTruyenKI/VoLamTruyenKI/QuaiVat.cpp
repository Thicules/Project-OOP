#include"QuaiVat.h"

void QuaiVat::setLV(int a)
{
	this->CapDo = a;
}

int QuaiVat::getLV() {
	return CapDo;
}

string QuaiVat::getTenQuai()
{
	return TenQuai;
}

QuaiVat::QuaiVat()
{
	this->He = RandHe();   
}

QuaiThuong::QuaiThuong()
{
	TenQuai = "Quai Thuong";
}

QuaiDauLinh::QuaiDauLinh()
{
	TenQuai = "Quai Dau Linh";
}

string QuaiVat::getHe()
{
	return He;
}

int QuaiThuong::getSatThuong()
{
	SatThuong = CapDo * 3;
	return SatThuong;
}

int QuaiDauLinh::getSatThuong()
{
	SatThuong = CapDo * 7;
	return SatThuong;
}

void QuaiThuong::upLV()
{
	CapDo += RandLV3();
	SatThuong = CapDo * 3;
}

void QuaiDauLinh::upLV() {
	CapDo += 1;
	SatThuong = CapDo * 7;
}

int RandLV3()
{
	// 20% tang 2lv ,80% tang 1lv
	int x = rand() % 10;
	if (x < 2) return 2;
	else return 1;

}

string RandHe()
{
	int x;
	x = rand() % 5 + 1;
	switch (x)
	{
	case 1: return "Kim"; break;
	case 2: return "Moc"; break;
	case 3: return "Thuy"; break;
	case 4: return "Hoa"; break;
	case 5: return "Tho"; break;
	}
}

void QuaiVat::coutQuaiVat()
{
	cout << "Ten quai vat:\t" << TenQuai << endl;
	cout << "Cap do:\t\t" << CapDo << endl;
	cout << "He:\t\t" << He << endl;
	cout << "Sat thuong:\t" << SatThuong << endl;
}