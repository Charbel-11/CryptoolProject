#pragma once
#include "Affine Cipher.h"
#include "MonoAlphabeticCipher.h"
#include "Vigenere Cipher.h"

int main() {
	VigenereCipher vc("VIGENERE");
	string enc = vc.encrypt("CRYPTANALYSIS");
	string dec = vc.decrypt(enc);
	cout << enc << '\n' << dec << '\n';
	cin.ignore(2); return 0;
}