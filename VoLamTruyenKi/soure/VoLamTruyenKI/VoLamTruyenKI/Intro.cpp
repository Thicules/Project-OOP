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
	string s = "   ----*CHAO MUNG THAY VA CAC BAN DEN VOI VO LAM TRUYEN KI*----";
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
void Intro::Charactor() {
	ifstream fi;
	fi.open("Nhanvat1.txt");
	int i = 0;
	while (!fi.eof()){
		string s;
		getline(fi, s);
		gotoXY(WidthConsole / 15, HeightConsole / 6 + i);
		cout << s;
		i++;
	}
	fi.close();
}
void Intro::Victory() {
	ifstream fi;
	fi.open("victory.txt");
	int i = 0;
	while (!fi.eof()) {
		string s;
		getline(fi, s);
		gotoXY(WidthConsole /4, HeightConsole / 6 + i);
		cout << s;
		i++;
	}
	fi.close();
}
void Intro::Defeat() {
	ifstream fi;
	fi.open("Defeat.txt");
	int i = 0;
	while (!fi.eof()) {
		string s;
		getline(fi, s);
		gotoXY(WidthConsole / 4, HeightConsole / 6 + i);
		cout << s;
		i++;
	}
	fi.close();
}
void Intro::Write(int ak,ofstream& fo,int n,string NV) {
	fo<< "Tran " << n << ":\n";
	fo << "Nhan vat : " << NV << endl;
	if (ak <= 5) {
		fo << "Quai vat thang\n";
		fo << "Ket thuc o ai " << ak << endl;
	}
	else fo<< "Chien thang\n";
}
void Intro::History() {
	ifstream fi;
	fi.open("Output.txt");
	int k = 0;
	while (!fi.eof()) {
		string s;
		getline(fi, s);
		gotoXY(WidthConsole / 2, HeightConsole / 3 + k);
		textColor(5);
		cout << s;
		k++;
	}
	fi.close();
}