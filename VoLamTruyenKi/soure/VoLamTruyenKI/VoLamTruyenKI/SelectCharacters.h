#pragma once
#include <iostream>
#include "Sound.h"
#include <thread>
#include <Windows.h>
#include <mmsystem.h>
#include <string>
#include "Graphics.h"
#include <fstream>
#include "Menu.h"
#include "Nhanvat.h"
using namespace std;

class SelectCharacters {
private:
	Box a[10];
public:
	SelectCharacters() {}
	~SelectCharacters() {}
	void Titile();
	void painMenu();
	void select(string& NV);
};