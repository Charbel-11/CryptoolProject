#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

string HEX = "0123456789ABCDEF";

string toBinary(int x, int len) {
	string res = "";
	while (x) { res.push_back((x & 1) + '0'); x >>= 1; }
	while ((int)res.size() < len) { res.push_back('0'); }
	reverse(res.begin(), res.end()); return move(res);
}

// Prints in binary(len bits) with each sp bits separated by a space
void printAsBinary(int k, int len, int sp) {
	string K = toBinary(k, len);
	for (int i = 0; i < len; i++) {
		if (i && i % sp == 0) cout << ' ';
		cout << K[i];
	}
	cout << '\n' << '\n';
}

void printAsPoly(int A) {
	if (!A) { cout << 0; return; }
	bool first = true;
	for (int j = 31; j >= 0; j--) {
		if ((A >> j) & 1) {
			if (!first) { cout << " + "; }
			first = false;
			if (j == 0) { cout << 1; }
			else if (j == 1) { cout << "x"; }
			else { cout << "x^" << j; }
		}
	}
}

//Multiplies polynomials a and b with coefficients in GF(2)
int multPoly(int a, int b) {
	int res = 0;
	for (int j = 31; j >= 0; j--) {
		if ((b >> j) & 1) {
			res ^= (a << j);
		}
	}
	return res;
}

//Takes polynomials a, b and returns polynomials a/b, a%b
pair<int, int> divPoly(int a, int b) {
	for (int j = 31; j >= 0; j--) {
		bool bSet = (b >> j) & 1;
		bool aSet = (a >> j) & 1;
		if (bSet && !aSet) { return { 0,a }; }
		else if (aSet) { break; }
	}
	int firstSetB = 0;
	for (int j = 31; j >= 0; j--) {
		if ((b >> j) & 1) { firstSetB = j; break; }
	}

	int q = 0, r = 0;
	for (int j = 31; j >= firstSetB; j--) {
		if (!((a >> j) & 1)) { continue; }
		for (int k = j; k >= 0; k--) {
			if ((b >> k) & 1) {
				int shift = j - k;
				q |= (1 << shift);
				int newB = b << shift;
				a ^= newB;
				break;
			}
		}
	}
	r = a;

	return { q, r };
}

//Finds the inverse of b with mod m
//Where b and m represent the coefficients of polynomials 
//Returns {gcd, multInv of b mod m}
pair<int, int> eGCDPoly(int b, int m) {
	vector<int> A = { 1,0,m }, B = { 0,1,b };

L:
	if (B[2] == 0) { return { A[2] , 0 }; } //No inverse
	if (B[2] == 1) { return { 1, B[1] }; }

	pair<int, int> divRes = divPoly(A[2], B[2]);
	int Q = divRes.first, R = divRes.second;

	vector<int> T = { A[0] ^ multPoly(Q, B[0]), A[1] ^ multPoly(Q, B[1]), R };
	A = B; B = T;
	goto L;
}


//Needed functions

int moduloReduction(int input, int mod) {
	return divPoly(input, mod).second;
}

//0 if no mult inverse exists (e.g. if input=mod)
int findInverse(int input, int mod) {
	input = moduloReduction(input, mod);
	return eGCDPoly(input, mod).second;
}

int add(int input1, int input2, int mod) {
	return moduloReduction(input1 ^ input2, mod);
}

int subtract(int input1, int input2, int mod) {
	return moduloReduction(input1 ^ input2, mod);
}

int multiply(int input1, int input2, int mod) {
	input1 = moduloReduction(input1, mod);
	input2 = moduloReduction(input2, mod);
	return moduloReduction(multPoly(input1, input2), mod);
}

pair<int, int> divide(int input1, int input2, int mod) {
	input1 = moduloReduction(input1, mod);
	input2 = moduloReduction(input2, mod);
	pair<int, int> p = divPoly(input1, input2);
	p.first = moduloReduction(p.first, mod);
	p.second = moduloReduction(p.second, mod);
	return p;
}