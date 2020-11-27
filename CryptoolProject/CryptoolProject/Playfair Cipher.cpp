#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> table(5, string(5, 'a'));
vector<int> row(26), col(26);

void initializePlayfair(string key) {
	vector<int> freq(26, 0);
	int n = (int)key.size(), j = 0;

	for (char &c : key) if (c == 'j') c = 'i';

	for (int i = 0; i < n; i++) 
		if (!freq[key[i] - 'a']) {
			table[j / 5][j % 5] = key[i];
			row[key[i] - 'a'] = j / 5;
			col[key[i] - 'a'] = j % 5;
			freq[key[i] - 'a'] = 1; j++;
		}

	for(int i = 0; i < 26; i++)
		if (!freq[i] && i != ('j' - 'a')) {
			table[j / 5][j % 5] = i + 'a';
			row[i] = j / 5;	col[i] = j % 5; j++;
		}

	//for (auto &x : table) cout << x << '\n';
}

//Encrypt the message using the table (initializePlayfair BEFORE using)
string encryptPlayfair(const string &s) {
	string res; int n = (int)s.size();

	//remove spaces and make sure no pair has same letter
	//Replace all j's by i's
	int i = 0; while (i < n) {
		if (s[i] == ' ') { i++; continue; }
		if (res.size() % 2 && s[i] == res.back()) {
			res.push_back('x'); 
			res.push_back(s[i] == 'j' ? 'i' : s[i]);
			i++; continue;
		}
		res.push_back(s[i] == 'j' ? 'i' : s[i]); i++;
	}
	if (res.size() & 1) { res.push_back('x'); }
	
	n = (int)res.size(); //res is now the modified message
	for (int i = 0; i < n; i += 2) {
		int a = res[i] - 'a', b = res[i + 1] - 'a';
		if (row[a] == row[b]) { //if same row cyclic right shift 
			res[i] = table[row[a]][(col[a] + 1) % 5];
			res[i + 1] = table[row[b]][(col[b] + 1) % 5];
		}
		else if (col[a] == col[b]) { //if same column cyclic down shift
			res[i] = table[(row[a] + 1) % 5][col[a]];
			res[i + 1] = table[(row[b] + 1) % 5][col[b]];
		}
		else {//otherwise swap column numbers
			res[i] = table[row[a]][col[b]];
			res[i + 1] = table[row[b]][col[a]];
		}
	}
	return move(res);
}

//Simply reverse what encrypt did to the modified message
string decryptPlayfair(const string &s) {
	string res = s; int n = (int)res.size();
	for (int i = 0; i < n; i += 2) {
		int a = res[i] - 'a', b = res[i + 1] - 'a';
		if (row[a] == row[b]) { // (-1 mod 5) == 4
			res[i] = table[row[a]][(col[a] + 4) % 5];
			res[i + 1] = table[row[b]][(col[b] + 4) % 5];
		}
		else if (col[a] == col[b]) {
			res[i] = table[(row[a] + 4) % 5][col[a]];
			res[i + 1] = table[(row[b] + 4) % 5][col[b]];
		}
		else {
			res[i] = table[row[a]][col[b]];
			res[i + 1] = table[row[b]][col[a]];
		}
	}
	return move(res);
}

int main() {
	string key; getline(cin, key); //Assumes key is given as a string with only lowercase english letters
	initializePlayfair(key);
	string s; getline(cin, s); //Assumes message is given as a single line with only lowercase english letters and spaces
	string enc = encryptPlayfair(s);
	string dec = decryptPlayfair(enc);
	cout << enc << '\n' << dec << '\n';
	cin.ignore(2); return 0;
}