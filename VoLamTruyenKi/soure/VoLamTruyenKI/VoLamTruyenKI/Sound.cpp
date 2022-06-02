#include "Sound.h"

void SoundIntro() {
	PlaySound(TEXT("Intro.wav"), NULL,SND_SYNC);
}
void SoundSelectCharacters() {
	PlaySound(TEXT("SelectCharacters.wav"), NULL, SND_SYNC);
}
void SoundRandomQuai() {
	PlaySound(TEXT("RandomQuai.wav"), NULL, SND_SYNC);
}
void SoundNVThang() {
	PlaySound(TEXT("NVThang.wav"), NULL, SND_SYNC);
}
void SoundQVThang() {
	PlaySound(TEXT("QVThang.wav"), NULL, SND_SYNC);
	PlaySound(TEXT("Gameover.wav"), NULL, SND_SYNC);
}
void SoundResetQV() {
	PlaySound(TEXT("ResetQV.wav"), NULL, SND_SYNC);
}
void SoundNext() {
	PlaySound(TEXT("Next.wav"), NULL, SND_SYNC);
}
void SoundQuaiThuong() {
	PlaySound(TEXT("QuaiThuong.wav"), NULL, SND_SYNC);
}
void SoundQuaiDauLinh() {
	PlaySound(TEXT("QuaiDauLinh.wav"), NULL, SND_SYNC);
}
void SoundHeKim() {
	PlaySound(TEXT("HeKim.wav"), NULL, SND_SYNC);
}
void SoundHeMoc() {
	PlaySound(TEXT("HeMoc.wav"), NULL, SND_SYNC);
}
void SoundHeThuy() {
	PlaySound(TEXT("HeThuy.wav"), NULL, SND_SYNC);
}
void SoundHeHoa() {
	PlaySound(TEXT("HeHoa.wav"), NULL, SND_SYNC);
}
void SoundHeTho() {
	PlaySound(TEXT("HeTho.wav"), NULL, SND_SYNC);
}
void SoundWin() {
	PlaySound(TEXT("Win.wav"), NULL, SND_SYNC);
}