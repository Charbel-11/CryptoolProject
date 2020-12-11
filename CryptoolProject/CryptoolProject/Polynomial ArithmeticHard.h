#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <bitset>
using namespace std;
const int SZ = 1200;

struct polyArithmeticLong {
	bitset<SZ> mod;

	// Prints in binary(len bits) with each sp bits separated by a space
	string printAsBinary(bitset<SZ>& K, int len, int sp) {
		string res;
		for (int i = 0; i < len; i++) {
			if (i && i % sp == 0) res.push_back(' ');
			res += (K[i]?'1':'0');
		}
		reverse(res.begin(), res.end());
		return res;
	}

	void printAsPoly(bitset<SZ> A) {
		bool first = true;
		for (int j = SZ - 1; j >= 0; j--) {
			if (A[j] & 1) {
				if (!first) { cout << " + "; }
				first = false;
				if (j == 0) { cout << 1; }
				else if (j == 1) { cout << "x"; }
				else { cout << "x^" << j; }
			}
		}
		if (first) { cout << 0; }
	}

	bitset<SZ> shift(bitset<SZ>& a, int k) {
		bitset<SZ> res;
		for (int i = k; i + k < SZ; i++) { 
			res[i] = a[i - k]; 
		}
		return move(res);
	}

	//Multiplies polynomials a and b with coefficients in GF(2)
	bitset<SZ> multPoly(bitset<SZ>& a, bitset<SZ>& b) {
		bitset<SZ> res;
		for (int j = SZ - 1; j >= 0; j--) {
			if (b[j]) {
				bitset<SZ> aShift = shift(a, j);
				res ^= aShift;
			}
		}
		return res;
	}

	//Takes polynomials a, b and returns polynomials a/b, a%b
	pair<bitset<SZ>, bitset<SZ>> divPoly(bitset<SZ>& a, bitset<SZ>& b) {
		for (int j = SZ - 1; j >= 0; j--) {
			if (b[j] && !a[j]) { return { bitset<SZ>(0),a }; }
			else if (a[j]) { break; }
		}
		int firstSetB = 0;
		for (int j = SZ - 1; j >= 0; j--) {
			if (b[j]) { firstSetB = j; break; }
		}

		bitset<SZ> q, r;
		for (int j = SZ - 1; j >= firstSetB; j--) {
			if (!a[j]) { continue; }
			for (int k = j; k >= 0; k--) {
				if (b[k]) {
					int curShift = j - k;
					q[curShift] = 1;
					bitset<SZ> newB = shift(b, curShift);
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
	pair<bitset<SZ>, bitset<SZ>> eGCDPoly(bitset<SZ>& b, bitset<SZ>& m) {
		bitset<SZ> one, zero; one[0] = 1;
		vector<bitset<SZ>> A = { one, zero, m }, B = { zero, one, b };

	L:
		if (B[2] == zero) { return { A[2], zero }; } //No inverse
		if (B[2] == one) { return { one, B[1] }; }

		pair<bitset<SZ>, bitset<SZ>> divRes = divPoly(A[2], B[2]);
		bitset<SZ> Q = divRes.first, R = divRes.second;

		bitset<SZ> mult0 = multPoly(Q, B[0]), mult1 = multPoly(Q, B[1]);
		vector<bitset<SZ>> T = { A[0] ^ mult0, A[1] ^ mult1, R };
		A = B; B = T;
		goto L;
	}


	//Needed functions

	bitset<SZ> moduloReduction(bitset<SZ>& input) {
		return divPoly(input, mod).second;
	}

	//0 if no mult inverse exists (e.g. if input=mod)
	bitset<SZ> findInverse(bitset<SZ>& input) {
		input = moduloReduction(input);
		return eGCDPoly(input, mod).second;
	}

	bitset<SZ> add(bitset<SZ>& input1, bitset<SZ>& input2) {
		bitset<SZ> x = input1 ^ input2;
		return moduloReduction(x);
	}

	bitset<SZ> subtract(bitset<SZ>& input1, bitset<SZ>& input2) {
		bitset<SZ> x = input1 ^ input2;
		return moduloReduction(x);
	}

	bitset<SZ> multiply(bitset<SZ>& input1, bitset<SZ>& input2) {
		input1 = moduloReduction(input1);
		input2 = moduloReduction(input2);
		bitset<SZ> m = multPoly(input1, input2);
		return moduloReduction(m);
	}

	pair<bitset<SZ>, bitset<SZ>> divide(bitset<SZ>& input1, bitset<SZ>& input2) {
		input1 = moduloReduction(input1);
		input2 = moduloReduction(input2);
		pair<bitset<SZ>, bitset<SZ>> p = divPoly(input1, input2);
		p.first = moduloReduction(p.first);
		p.second = moduloReduction(p.second);
		return p;
	}


	//Choices: 1...8, 163, 233, 239, 283, 409, 571
	void setMod(int deg) {
		mod.reset(); mod[0] = 1;
		if (deg == 2) { mod[2] = mod[1] = 1; }
		else if (deg == 3) { mod[3] = mod[2] = 1; }
		else if (deg == 4) { mod[4] = mod[3] = 1; }
		else if (deg == 5) { mod[5] = mod[2] = 1; }
		else if (deg == 6) { mod[6] = mod[1] = 1; }
		else if (deg == 7) { mod[7] = mod[1] = 1; }
		else if (deg == 8) { mod[8] = mod[4] = mod[3] = mod[1] = 1; }
		else if (deg == 163) { mod[163] = mod[7] = mod[6] = mod[3] = 1; }
		else if (deg == 233) { mod[233] = mod[74] = 1; }
		else if (deg == 239) { mod[239] = mod[36] = 1; }
		else if (deg == 283) { mod[283] = mod[12] = mod[7] = mod[5] = 1; }
		else if (deg == 409) { mod[409] = mod[87] = 1; }
		else if (deg == 571) { mod[571] = mod[10] = mod[5] = mod[2] = 1; }
	}
};