#include "Intro.h"
#include <thread>

Intro::Intro() {

}
Intro::~Intro()
{

}
void Intro::Out() {
	thread threadSound(SoundIntro);
	textColor(10);
	gotoXY(WidthConsole/3, HeightConsole/2.5);
	string s = "   ----*Chao mung thay va cac ban den voi vo lam truyen ki*----";
	for (int i = 0; i < s.size(); i++) {
		cout << s[i];
		Sleep(45);
	}
	threadSound.join();
}
void Intro::Outro() {
	thread sound(SoundWin);
	textColor(6);
	gotoXY(WidthConsole / 2.5, HeightConsole / 2.5);
	string s = "* Chuc mung ban da chien thang * ";
	for (int i = 0; i < s.size(); i++) {
		cout << s[i];
		Sleep(70);
	}
	sound.join();
}
void Intro::BreakTime() {
	thread sound(SoundChane);
	ifstream fi;
	for (int i = 0; i <300; i=i+5) {
		int j = 0;
		fi.open("Kiem.txt");
		while (!fi.eof()) {
			string s;
			textColor(4);
			gotoXY(WidthConsole/4+i / 3, 10+j );
			getline(fi, s);
			cout << s << endl;
			j++;
		}
		fi.close();
		Sleep(100);
	}
	sound.join();
	clrscr();
}