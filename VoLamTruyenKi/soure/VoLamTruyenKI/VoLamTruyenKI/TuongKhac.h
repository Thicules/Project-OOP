#pragma once
#include <string>
#include "Total.h"
#include "XuLi.h"
//#include "NhanVat.h"
//#include "QuaiVat.h"
using namespace std;
class TuongKhac {
private:
	string check(string He1, string He2);
public:
	friend class XuLi;
	TuongKhac() {
	};
};