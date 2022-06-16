#pragma once
#include "Sound.h"
#include <string>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "Header.h"
#include <fstream>
using namespace std;

class Intro {
public:
	Intro();
	~Intro();
	void Out();
	void Outro();
	void BreakTime();
	void Charactor();
	void Victory();
	void Defeat();
	void Write(int ak, ofstream& fo, int n, string NV, int akconst);
	void History();
};