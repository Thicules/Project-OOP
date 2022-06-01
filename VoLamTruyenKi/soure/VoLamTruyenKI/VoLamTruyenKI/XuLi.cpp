#include "XuLi.h"
#include "Total.h"
#include "TuongKhac.h"
#include "Header.h"
#include "Nhanvat.h"
#include "QuaiVat.h"
#include <random>
#include <thread>

int ak = 1;

void XuLi::intro(){
	thread sound(SoundRandomQuai);
	sound.join();
	ifstream fi;
	int i = 0;
	for (int i = 0; i < 50; i++) {
		int j = 0;
		fi.open("BatQuai.txt");
		while (!fi.eof()) {
			string s;
			textColor(0);
			gotoXY(WidthConsole / 3.5, 5 + j);
			getline(fi, s);
			cout << s << endl;
			j++;
		}
		Sleep(40);
		fi.close();
		clrscr();
	}

}
bool XuLi::Win() {
	TuongKhac a;
	string He1 = NV->getHe();
	string He2 = QV->getHe();
	string result = a.check(He1, He2);
	string result1 = a.check(He2, He1);
	float SatThuongNV = NV->getSatThuong();
	float SatThuongQV = QV->getSatThuong();
	if (result == "Sinh") {
		SatThuongNV = NV->getSatThuong() * 1.1;
	}
	if (result == "Khac") {
		SatThuongNV = NV->getSatThuong() * 1.2;
		SatThuongQV = QV->getSatThuong() * 0.8;
	}
	if (result1 == "Khac")
	{
		SatThuongNV = NV->getSatThuong() * 0.8;
		SatThuongQV = QV->getSatThuong() * 1.2;
	}
	cout << "-----------------------------------" << endl;
	cout << "     ROUND " << ak << endl; ak += 1;
	NV->coutNhanVat(); cout << "     ---VS---" << endl;
	QV->coutQuaiVat();
	cout << "ST Nhan Vat: \t" << SatThuongNV << endl;
	cout << "ST Quai Vat: \t" << SatThuongQV << endl;
	if (SatThuongNV > SatThuongQV) {
		cout << "  Nhan Vat Thang " << endl; return 1;
	}
	else cout << "  Quai Vat Thang";
	cout << endl;
	return 0;
}

void XuLi::KhoiTaoNhanVat(string TenNhanVat)
{
	if (TenNhanVat == "Tieu Long Nu")  NV = new TieuLongNu;
	if (TenNhanVat == "Duong Qua") NV = new DuongQua;
	if (TenNhanVat == "Quach Tinh") NV = new QuachTinh;
	if (TenNhanVat == "Au Duong Phong") NV = new AuDuongPhong;
	if (TenNhanVat == "Doan Chi Binh") NV = new DoanChiBinh;
	if (TenNhanVat == "Kieu Phong") NV = new KieuPhong;
	if (TenNhanVat == "Hu Tuc") NV = new HuTuc;
	if (TenNhanVat == "Doan Du") NV = new DoanDu;
	if (TenNhanVat == "Truong Vo Ki") NV = new TruongVoKi;
	if (TenNhanVat == "Ly Mac Sau") NV = new LyMacSau;
}

void XuLi::KhoiTaoQuaiVat()
{
	QV = new QuaiThuong;
	QV->setLV(1);
}

void XuLi::resetQuai()
{
	int LV = QV->getLV();
	if (randLoaiQuai() == "QuaiThuong") QV = new QuaiThuong;
	else QV = new QuaiDauLinh;
	QV->setLV(LV);
	QV->upLV();
}

void XuLi::Start()
{
	KhoiTaoQuaiVat();
	int dem = 1;
	while (Win())
	{
		NV->upLV(QV->getTenQuai());
		resetQuai();
	}
}

string randLoaiQuai()
{
	int x = rand() % 10;
	if (x < 3) return "QuaiDauLinh";
	else return "QuaiThuong";
}
