#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class VigenereCipher {

	vector<int> encKey, decKey; int m = 0; VigenereCipher() {}
	bool isLower(char& c) { return c >= 'a' && c <= 'z'; }
	bool isUpper(char& c) { return c >= 'A' && c <= 'Z'; }

	string vigenereEncryption(string& s, vector<int>& key) {
		int n = (int)s.size(); for (int i = 0; i < n; i++) {
			if (isLower(s[i])) { s[i] = ((s[i] - 'a' + key[i % m]) % 26) + 'a'; }
			if (isUpper(s[i])) { s[i] = ((s[i] - 'A' + key[i % m]) % 26) + 'A'; }
		}
		return move(s);
	}

public:

	VigenereCipher(vector<int> key) : encKey((int)key.size()), decKey((int)key.size()), m((int)key.size()) {
		for (int i = 0; i < m; i++)	encKey[i] = ((key[i] % 26) + 26) % 26;
		for (int i = 0; i < m; i++)	decKey[i] = (-encKey[i] + 26) % 26;
	}
	VigenereCipher(string key) : m((int)key.size()), encKey((int)key.size()), decKey((int)key.size()) {
		for (int i = 0; i < m; i++)	encKey[i] = key[i] - (isLower(key[i]) ? 'a' : 'A');
		for (int i = 0; i < m; i++)	decKey[i] = (-encKey[i] + 26) % 26;
	}
	string encrypt(string message) {
		return move(vigenereEncryption(message, encKey));
	}
	string decrypt(string message) {
		return move(vigenereEncryption(message, decKey));
	}
};