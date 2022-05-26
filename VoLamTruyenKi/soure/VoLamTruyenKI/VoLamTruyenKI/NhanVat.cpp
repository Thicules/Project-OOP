#include"Nhanvat.h"

string Nhanvat::getHe()
{
	He = kiemtraHe(MonPhai);
	return He;
}

int Nhanvat::getSatThuong()
{
	SatThuong = CapDo * 5;
	return SatThuong;
}

int Nhanvat::getSatThuongLenQuai(string HeQuai)
{
	SatThuongLenQuai = (SatThuong * 1.0) * TiledameA(He, HeQuai);
	return int(SatThuongLenQuai);
}

void Nhanvat::coutThongTin()
{

};
//  Chưa viết 

string kiemtraHe(string MonPhai)
{
	if (MonPhai == "Thieu Lam")
		return "Kim";
	if (MonPhai == "Vuong Bang")
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
		return "Hoa";
	if (MonPhai == "Vo Dang")
		return "Hoa";
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