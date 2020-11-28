#include <iostream>
#include <string>
#include <vector>
#include <assert.h>
using namespace std;

class AffineCipher {

	int a = 1, b = 0; AffineCipher() {}
	bool isLower(char& c) { return c >= 'a' && c <= 'z'; }
	bool isUpper(char& c) { return c >= 'A' && c <= 'Z'; }
	vector<int> modInv = { -1, 1, -1, 9, -1, 21, -1, 15, -1, 3, -1, 19, -1, -1, -1, 7, -1, 23, -1, 11, -1, 5, -1, 17 };

public:

	AffineCipher(int _a, int _b) : a(((_a % 26) + 26) % 26), b(((_b % 26) + 26) % 26) {}
	AffineCipher(char mostFreq, char secondMostFreq) {
		assert(mostFreq != secondMostFreq);
		assert(isLower(mostFreq) || isUpper(mostFreq));
		assert(isLower(secondMostFreq) || isUpper(secondMostFreq));

		int F = mostFreq - (isLower(mostFreq) ? 'a' : 'A');
		int S = secondMostFreq - (isLower(secondMostFreq) ? 'a' : 'A');
		b = (3 * F + 24 * S) % 26; a = (7 * (S - F + 26)) % 26;
	}

	string encrypt(string s) {
		int n = (int)s.size();
		for (int i = 0; i < n; i++) {
			if (isLower(s[i])) { s[i] = (((s[i] - 'a') * a + b) % 26) + 'a'; }
			if (isUpper(s[i])) { s[i] = (((s[i] - 'A') * a + b) % 26) + 'A'; }
		}
		return move(s);
	}
	string decrypt(string s) {
		int n = (int)s.size(), A = modInv[a], B = (((-A * b) % 26) + 26) % 26;
		for (int i = 0; i < n; i++) {
			if (isLower(s[i])) { s[i] = (((s[i] - 'a') * A + B) % 26) + 'a'; }
			if (isUpper(s[i])) { s[i] = (((s[i] - 'A') * A + B) % 26) + 'A'; }
		}
		return move(s);
	}
	int getA() { return a; }
	int getB() { return b; }
};