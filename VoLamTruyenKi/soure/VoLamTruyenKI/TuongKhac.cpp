#include "TuongKhac.h"

string TuongKhac::check(string He1, string He2) {
	string s= "Sinh";
	string k = "Khac";
	if (He1 == "Moc" && He2 == "Hoa") return s;
	if (He1 == "Hoa" && He2 == "Tho") return s;
	if (He1 == "Tho" && He2 == "Kim") return s;
	if (He1 == "Kim" && He2 == "Thuy") return s;
	if (He1 == "Thuy" && He2 == "Moc") return s;
	if (He1 == "Moc" && He2 == "Tho") return k;
	if (He1 == "Hoa" && He2 == "Kim") return k;
	if (He1 == "Tho" && He2 == "Thuy") return k;
	if (He1 == "Kim" && He2 == "Moc") return k;
	if (He1 == "Thuy" && He2 == "Hoa") return k;
	return "";
}