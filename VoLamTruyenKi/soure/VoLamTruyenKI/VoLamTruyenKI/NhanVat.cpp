#include"NhanVat.h"

string NhanVat::getHe()
{
	He = kiemtraHe(MonPhai);
	return He;
}

int NhanVat::getSatThuong()
{
	SatThuong = CapDo * 5;
	return SatThuong;
}

int NhanVat::getSatThuongLenQuai(string HeQuai)
{
	SatThuongLenQuai = (SatThuong * 1.0) * TiledameA(He, HeQuai);
	return int(SatThuongLenQuai);
}

void NhanVat::coutThongTin()
{

};
//tiểu long nữ
TieuLongNu::TieuLongNu() {
	TenNhanVat = "Tieu Long Nu";
	MonPhai = "Thien vuong bang";
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
TruongVoKi::TruongVoKi(){
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

float TiledameA(string HeA, string HeB)
{
	if (HeA == "Kim")
	{
		if (HeB == "Thuy") return 1.1;
		if (HeB == "Moc") return 1.2;
		if (HeB == "Hoa")return 0.8;
		return 1;
	};

	if (HeA == "Thuy")
	{
		if (HeB == "Moc") return 1.1;
		if (HeB == "Hoa") return 1.2;
		if (HeB == "Tho")return 0.8;
		return 1;
	};

	if (HeA == "Moc")
	{
		if (HeB == "Hoa") return 1.1;
		if (HeB == "Tho") return 1.2;
		if (HeB == "Kim")return 0.8;
		return 1;
	};


	if (HeA == "Hoa")
	{
		if (HeB == "Tho") return 1.1;
		if (HeB == "Kim") return 1.2;
		if (HeB == "Thuy")return 0.8;
		return 1;
	};

	if (HeA == "Tho")
	{
		if (HeB == "Kim") return 1.1;
		if (HeB == "Thuy") return 1.2;
		if (HeB == "Moc")return 0.8;
		return 1;
	};

}