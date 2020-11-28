#pragma once
#include "AffineCipher.h"
#include "MonoAlphabeticCipher.h"
#include "VigenereCipher.h"
#include "PlayfairCipher.h"
#include "AES.h"
#include "DES.h"

int main() {
	AES aes("1010101010101010101010101010101010101010101010101010101010101010");
	string enc = aes.encrpytAES("000102030405060708090A0B0C0D0E0F");
	string dec = aes.decryptAES(enc);
	cout << enc << '\n' << dec << '\n';
	cin.ignore(2); return 0;
}