#pragma once
#include <iostream>
#include "Sound.h"
#include <thread>
#include <Windows.h>
#include <mmsystem.h>
#include <string>
#include "Graphics.h"
using namespace std;

class SelectCharacters {
public:
	SelectCharacters() {}
	~SelectCharacters() {}
	void Titile();
	void img();
	void run();
};