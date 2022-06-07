#pragma once
#include "Sound.h"
#include <string>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "Header.h"
using namespace std;

class Intro {
public:
	Intro();
	~Intro();
	void Out();
	void Outro();
	void BreakTime();
};