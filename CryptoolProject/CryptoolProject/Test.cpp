#pragma once
#include "Affine Cipher.h"
#include "MonoAlphabeticCipher.h"

int main() {
	MonoAlphabeticCipher mac("DKVQFIBJWPESCXHTMYAUOLRGZN");
	string enc = mac.encrypt("ifwewishtoreplaceletters");
	string dec = mac.decrypt(enc);
	cout << enc << '\n' << dec << '\n';
	cin.ignore(2); return 0;
}