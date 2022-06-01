#pragma once
#include "Total.h"
#include <iostream>
#include <string>
#include "NhanVat.h"
#include "QuaiVat.h"
using namespace std;

class XuLi {
	NhanVat* NV;
	QuaiVat* QV;
public:
	~XuLi()
	{
		delete NV, QV;

	};
	void intro();
	bool Win();
	void KhoiTaoNhanVat(string TenNhanVat);
	void resetQuai();   // Tao quai vat moi sau khi con cu chet di 
	void KhoiTaoQuaiVat();
	void Start();
};

string randLoaiQuai();