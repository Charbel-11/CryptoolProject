#include <iostream>
#include <string>
#include <vector>
using namespace std;

class VigenereCipher {

	vector<int> key; int m = 0; VignereCipher() {}
	bool isLower(char& c) { return c >= 'a' && c <= 'z'; }
	bool isUpper(char& c) { return c >= 'A' && c <= 'Z'; }

public:

	VigenereCipher(vector<int> _key) : key(key), m((int)_key.size()) {}
	VigenereCipher(string _key) : m((int)_key.size()) {
		key.resize(m); for (int i = 0; i < m; i++)
			key[i] = _key[i] - (isLower(_key[i]) ? 'a' : 'A');
	}
	string encryptVigenere(string s) {
		int n = (int)s.size(); for (int i = 0; i < n; i++) {
			if (isLower(s[i])) { s[i] = ((s[i] - 'a' + key[i % m]) % 26) + 'a'; }
			if (isUpper(s[i])) { s[i] = ((s[i] - 'A' + key[i % m]) % 26) + 'A'; }
		}
		return move(s);
	}
	string decryptVigenere(string s) {
		int n = (int)s.size(); for (int i = 0; i < n; i++) {
			if (isLower(s[i])) { s[i] = ((s[i] - 'a' - key[i % m] + 26) % 26) + 'a'; }
			if (isUpper(s[i])) { s[i] = ((s[i] - 'A' - key[i % m] + 26) % 26) + 'A'; }
		}
		return move(s);
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s; getline(cin, s); 
	int m; cin >> m; key.resize(m);
	for (auto &x : key) { cin >> x; }

	VigenereCipher vc(key);
	s = vc.encryptVigenere(s); cout << s << '\n';
	s = vc.decryptVigenere(s); cout << s << '\n';
	cin.ignore(2); return 0;
}