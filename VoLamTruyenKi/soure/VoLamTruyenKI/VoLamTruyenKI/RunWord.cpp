#include "RunWord.h"
#include <iostream>
#include <windows.h>

using namespace std;


TaoChuChay::TaoChuChay() {

}

TaoChuChay::~TaoChuChay() {

}

void TaoChuChay::HienThi(char CHU, int miligiay) {
	cout << CHU;
	Sleep(miligiay);
}