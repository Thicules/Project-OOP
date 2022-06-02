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
	for (int i = 0; i <2; i++) {
		int j = 0;
		fi.open("BatQuai1.txt");
		while (!fi.eof()) {
			string s;
			textColor(0);
			gotoXY(WidthConsole / 3, 7 + j);
			getline(fi, s);
			cout << s << endl;
			j++;
		}
		Sleep(500);
		clrscr();
		fi.close();
		j = 0;
		fi.open("BatQuai2.txt");
		while (!fi.eof()) {
			string s;
			textColor(0);
			gotoXY(WidthConsole / 3, 7 + j);
			getline(fi, s);
			cout << s << endl;
			j++;
		}
		Sleep(500);
		clrscr();
		fi.close();
		j = 0;
		fi.open("BatQuai3.txt");
		while (!fi.eof()) {
			string s;
			textColor(0);
			gotoXY(WidthConsole / 3, 7 + j);
			getline(fi, s);
			cout << s << endl;
			j++;
		}
		Sleep(500);
		clrscr();
		fi.close();
		j = 0;
		fi.open("BatQuai4.txt");
		while (!fi.eof()) {
			string s;
			textColor(0);
			gotoXY(WidthConsole / 3, 7 + j);
			getline(fi, s);
			cout << s << endl;
			j++;
		}
		Sleep(500);
		clrscr();
		fi.close();
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
		SoundNVThang();
		cout << "  Nhan Vat Thang " << endl; return 1;
	}
	else {
		SoundQVThang();
		cout << "  Quai Vat Thang";
	}
	cout << endl;
	Sleep(50);
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
	if (randLoaiQuai() == "QuaiThuong") {
		QV = new QuaiThuong;
		SoundQuaiThuong();
	}
	else {
		QV = new QuaiDauLinh;
		SoundQuaiDauLinh();
	}
	QV->setLV(LV);
	QV->upLV();
	Sleep(30);
}

void XuLi::Start()
{
	KhoiTaoQuaiVat();
	int dem = 1;
	while (Win())
	{
		Sleep(1000);
		clrscr();
		if (dem == 5) {
			SoundWin();
			return;
		}
		Sleep(50);
		SoundNext();
		SoundResetQV();
		if (QV->getHe() == "Kim") SoundHeKim();
		else if (QV->getHe() == "Moc") SoundHeMoc();
		else if (QV->getHe() == "Thuy") SoundHeThuy();
		else if (QV->getHe() == "Hoa") SoundHeHoa();
		else SoundHeTho();
		Sleep(50);
		NV->upLV(QV->getTenQuai());
		resetQuai();
		Sleep(20);
		dem++;
	}
}

string randLoaiQuai()
{
	int x = rand() % 10;
	if (x < 3) return "QuaiDauLinh";
	else return "QuaiThuong";
}
