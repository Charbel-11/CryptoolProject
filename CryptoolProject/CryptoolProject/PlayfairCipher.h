#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class PlayfairCipher {
	vector<string> table;
	vector<int> row, col;

	bool isUpper(char& c) { return c >= 'A' && c <= 'Z'; }
	bool isLower(char& c) { return c >= 'a' && c <= 'z'; }

	void initializePlayfair(string &key) {
		vector<int> freq(26, 0);
		int n = (int)key.size(), j = 0;

		for (char& c : key) {
			if (isUpper(c)) { c = c - 'A' + 'a'; }
			if (c == 'j') { c = 'i'; }
		}

		for (int i = 0; i < n; i++)
			if (!freq[key[i] - 'a']) {
				table[j / 5][j % 5] = key[i];
				row[key[i] - 'a'] = j / 5;
				col[key[i] - 'a'] = j % 5;
				freq[key[i] - 'a'] = 1; j++;
			}

		for (int i = 0; i < 26; i++)
			if (!freq[i] && i != ('j' - 'a')) {
				table[j / 5][j % 5] = i + 'a';
				row[i] = j / 5;	col[i] = j % 5; j++;
			}

		//for (auto &x : table) cout << x << '\n';
	}

	//Encrypt the message using the table (initializePlayfair BEFORE using)
	string playfairEncryption(string& res, int shift) {
		int n = (int)res.size(); //res is now the modified message
		for (int i = 0; i < n; i += 2) {
			int a = res[i] - 'a', b = res[i + 1] - 'a';
			if (row[a] == row[b]) { //if same row cyclic right shift 
				res[i] = table[row[a]][(col[a] + shift) % 5];
				res[i + 1] = table[row[b]][(col[b] + shift) % 5];
			}
			else if (col[a] == col[b]) { //if same column cyclic down shift
				res[i] = table[(row[a] + shift) % 5][col[a]];
				res[i + 1] = table[(row[b] + shift) % 5][col[b]];
			}
			else {//otherwise swap column numbers
				res[i] = table[row[a]][col[b]];
				res[i + 1] = table[row[b]][col[a]];
			}
		}
		return move(res);
	}

public:

	PlayfairCipher() : table(5, "aaaaa"), row(26), col(26) {}
	PlayfairCipher(string key) : PlayfairCipher() { initializePlayfair(key); }

	string encrypt(string message) {
		string cur; int n = (int)message.size();
		for (int i = 0; i < n; i++) {
			if (!isUpper(message[i]) && !isLower(message[i])) { continue; }
			char c = isLower(message[i]) ? message[i] : message[i] - 'A' + 'a';
			if (cur.size() % 2 && c == cur.back()) { cur.push_back('x'); i--; continue; }
			cur.push_back(c == 'j' ? 'i' : c);
		}
		if (cur.size() % 2) { cur.push_back('x'); }
		return move(playfairEncryption(cur, 1));
	}

	string decrypt(string message) {
		for (char& c : message) if (isUpper(c)) c = c - 'A' + 'a';
		return move(playfairEncryption(message, 4));
	}
};