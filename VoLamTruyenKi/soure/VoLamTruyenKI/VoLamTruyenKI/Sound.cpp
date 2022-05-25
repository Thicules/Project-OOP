#include "Sound.h"

void SoundIntro() {
	PlaySound(TEXT("Intro.wav"), NULL,SND_SYNC);
}
void SoundSelectCharacters() {
	PlaySound(TEXT("SelectCharacters.wav"), NULL, SND_SYNC);
}