#include"NhanVat.h"

string NhanVat::getHe()
{
	return this->He;
}

int NhanVat::getSatThuong()
{
	this->SatThuong = this->CapDo * 5;
	return this->SatThuong;
}

void NhanVat::coutNhanVat()
{
	gotoXY(WidthConsole / 2.5, HeightConsole / 3.5);
	cout << "Nhan vat:\t" << this->TenNhanVat;
	gotoXY(WidthConsole / 2.5, HeightConsole / 3.5+1);
	cout << "Mon phai:\t" << this->MonPhai;
	gotoXY(WidthConsole / 2.5, HeightConsole / 3.5+2);
	cout << "He:\t\t" << this->He;
	gotoXY(WidthConsole / 2.5, HeightConsole / 3.5+3);
	cout << "Cap do:\t\t" << this->CapDo;
	gotoXY(WidthConsole / 2.5, HeightConsole / 3.5 + 4);
	cout << "Sat thuong:\t" << this->SatThuong;
}

//tiểu long nữ
TieuLongNu::TieuLongNu() {
	TenNhanVat = "Tieu Long Nu";
	MonPhai = "Thien Vuong Bang";
	He = "Kim";
}
// //Dương Quá
DuongQua::DuongQua() {
	TenNhanVat = "Duong Qua";
	MonPhai = "Thieu Lam";
	He = "Kim";
}
//Quách Tĩnh
QuachTinh::QuachTinh() {
	TenNhanVat = "Quach Tinh";
	MonPhai = "Ngu Doc Giao";
	He = "Moc";
}
//Âu Dương Phong
AuDuongPhong::AuDuongPhong() {
	TenNhanVat = "Au Duong Phong";
	MonPhai = "Duong Mon";
	He = "Moc";
}
// Doãn Chí Bình
DoanChiBinh::DoanChiBinh() {
	TenNhanVat = "Doan Chi Binh";
	MonPhai = "Nga My";
	He = "Thuy";
}
// Kiều Phong
KieuPhong::KieuPhong() {
	TenNhanVat = "Kieu Phong";
	MonPhai = "Thuy Yen Mon";
	He = "Thuy";
}
// Hư Túc
HuTuc::HuTuc() {
	TenNhanVat = "Hu Tuc";
	MonPhai = "Cai Bang";
	He = "Hoa";
}
// Đoàn Dự
DoanDu::DoanDu() {
	TenNhanVat = "Doan Du";
	MonPhai = "Thien Nhan Giao";
	He = "Hoa";
}
// Trương Vô Kị
TruongVoKi::TruongVoKi() {
	TenNhanVat = "Truong Vo ki";
	MonPhai = "Con Lon";
	He = "Tho";
}
// Lý Mạc Sầu
LyMacSau::LyMacSau() {
	TenNhanVat = "Ly Mac Sau";
	MonPhai = "Vo Dang";
	He = "Tho";
}
//  Chưa viết 

string kiemtraHe(string MonPhai)
{
	if (MonPhai == "Thieu Lam")
		return "Kim";
	if (MonPhai == "Thien Vuong Bang")
		return "Kim";

	if (MonPhai == "Ngu Doc Giao")
		return "Moc";
	if (MonPhai == "Duong Mon")
		return "Moc";

	if (MonPhai == "Nga My")
		return "Thuy";
	if (MonPhai == "Thuy Yen Mon")
		return "Thuy";

	if (MonPhai == "Cai Bang")
		return "Hoa";
	if (MonPhai == "Thien Nhan Giao")
		return "Hoa";

	if (MonPhai == "Con Lon")
		return "Tho";
	if (MonPhai == "Vo Dang")
		return "Tho";
}

void NhanVat::upLV(string TenQuai)
{
	int a;
	if (TenQuai == "Quai Thuong") a = 0;
	else a = 1;
	(a == 0) ? (CapDo += RandLV1()) : (CapDo += RandLV2());
}

int RandLV1()
{
	//20% tang 2 lv. 80% tang 1lv
	int x = rand() % 1000 % 10;
	if (x < 2) return 2;
	else return 1;
}

int RandLV2()
{
	//12% tang 3 lv, 83% tang 2lv ,5% tang 1lv
	int x = rand() % 1000 % 100;
	if (x < 12) return 3;
	if (x < 17) return 1;
	return 2;
}