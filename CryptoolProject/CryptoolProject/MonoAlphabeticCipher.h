#pragma once
#include <iostream>
#include <string>
#include <array>
#include <assert.h>
#include <numeric>
#include <set>
using namespace std;

class MonoAlphabeticCipher {

    array<int, 26> encKey, decKey;

    bool isLower(char& c) { return c >= 'a' && c <= 'z'; }
    bool isUpper(char& c) { return c >= 'A' && c <= 'Z'; }

    string monoAlphabeticEncryption(const string& message, array<int, 26>& key) {
        string res = message; for (char& c : res) {
            if (isLower(c)) { c = 'a' + key[c - 'a']; continue; }
            if (isUpper(c)) { c = 'A' + key[c - 'A']; continue; }
        }
        return move(res);
    }


public:

    MonoAlphabeticCipher() {
        iota(encKey.begin(), encKey.end(), 0);
        iota(decKey.begin(), decKey.end(), 0);
    }

    MonoAlphabeticCipher(string key) {
        for (int i = 0; i < 26; i++) encKey[i] = key[i] - 'a';
        for (int i = 0; i < 26; i++) decKey[encKey[i]] = i;
    }

    string encrypt(string message) {
        return move(monoAlphabeticEncryption(message, encKey));
    }

    string decrypt(string message) {
        return move(monoAlphabeticEncryption(message, decKey));
    }

};