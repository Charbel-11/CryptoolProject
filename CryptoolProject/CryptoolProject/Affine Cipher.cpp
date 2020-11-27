#include <iostream>
#include <string>
using namespace std;

class AffineCipher {

	int a = 1, b = 0; AffineCipher() {}
	bool isLower(char& c) { return c >= 'a' && c <= 'z'; }
	bool isUpper(char& c) { return c >= 'A' && c <= 'Z'; }
	vector<int> modInv = { -1, 1, -1, 9, -1, 21, -1, 15, -1, 3, -1, 19, -1, -1, -1, 7, -1, 23, -1, 11, -1, 5, -1, 17 };

public:

	AffineCipher(int _a, int _b) : a(((_a % 26) + 26) % 26), b(((_b % 26) + 26) % 26) {}
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
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s; getline(cin, s);
	int a, b; cin >> a >> b; AffineCipher ac(a, b);
	s = ac.encrypt(s); cout << s << '\n';
	s = ac.decrypt(s); cout << s << '\n';
	cin.ignore(2); return 0;
}