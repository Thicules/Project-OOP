#include "XuLi.h"
#include "Total.h"
#include "TuongKhac.h"

bool XuLi::Win(NhanVat* NV,QuaiVat* QV) {
	TuongKhac a;
	string He1 = NV->getHe();
	string He2 = QV->getHe();
	string result = a.check(He1, He2);
	float SatThuongNV;
	float SatThuongQV;
	if (result == "Sinh") {
		SatThuongNV = NV->getSatThuong() * 1.1;
	}
	else if (result == "Khac") {
		SatThuongNV = NV->getSatThuong() * 1.2;
		SatThuongQV = QV->getSatThuong() * 0.8;
	}
	return 0;
}