#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
int SZ = 1200;

// Prints in binary(len bits) with each sp bits separated by a space
void printAsBinary(vector<bool>& K, int len, int sp) {
	for (int i = 0; i < len; i++) {
		if (i && i % sp == 0) cout << ' ';
		cout << K[i];
	}
	cout << '\n' << '\n';
}

void printAsPoly(vector<bool> A) {
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

vector<bool> XOR(vector<bool>& a, vector<bool>& b) {
	vector<bool> res(SZ, 0);
	for (int i = 0; i < SZ; i++) { res[i] = a[i] ^ b[i]; }
	return move(res);
}

vector<bool> shift(vector<bool>& a, int k) {
	vector<bool> res(SZ, 0);
	for (int i = k; i < SZ; i++) { res[k] = a[i - k]; }
	return move(res);
}

//Multiplies polynomials a and b with coefficients in GF(2)
vector<bool> multPoly(vector<bool>& a, vector<bool>& b) {
	vector<bool> res(SZ, 0);
	for (int j = SZ-1; j >= 0; j--) {
		if (b[j]) {
			vector<bool> aShift = shift(a, j);
			res = XOR(res, aShift);
		}
	}
	return res;
}

//Takes polynomials a, b and returns polynomials a/b, a%b
pair<vector<bool>, vector<bool>> divPoly(vector<bool>& a, vector<bool>& b) {
	for (int j = SZ-1; j >= 0; j--) {
		if (b[j] && !a[j]) { return { vector<bool>(SZ, 0),a }; }
		else if (a[j]) { break; }
	}
	int firstSetB = 0;
	for (int j = SZ-1; j >= 0; j--) {
		if (b[j]) { firstSetB = j; break; }
	}

	vector<bool> q(SZ, 0), r(SZ, 0);
	for (int j = SZ-1; j >= firstSetB; j--) {
		if (!a[j]) { continue; }
		for (int k = j; k >= 0; k--) {
			if (b[k]) {
				int curShift = j - k;
				q[curShift] = 1;
				vector<bool> newB = shift(b, curShift);
				a = XOR(a, newB);
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
pair<vector<bool>, vector<bool>> eGCDPoly(vector<bool>& b, vector<bool>& m) {
	vector<bool> one(SZ, 0), zero(SZ, 0); one[0] = 1;
	vector<vector<bool>> A = { one, zero, m }, B = { zero, one, b };

L:
	if (B[2] == zero) { return { A[2], zero }; } //No inverse
	if (B[2] == one) { return { one, B[1] }; }

	pair<vector<bool>, vector<bool>> divRes = divPoly(A[2], B[2]);
	vector<bool> Q = divRes.first, R = divRes.second;

	vector<bool> mult0 = multPoly(Q, B[0]), mult1 = multPoly(Q, B[1]);
	vector<vector<bool>> T = { XOR(A[0], mult0), XOR(A[1], mult1), R };
	A = B; B = T;
	goto L;
}


//Needed functions

vector<bool> moduloReduction(vector<bool>& input, vector<bool>& mod) {
	return divPoly(input, mod).second;
}

//0 if no mult inverse exists (e.g. if input=mod)
vector<bool> findInverse(vector<bool>& input, vector<bool>& mod) {
	input = moduloReduction(input, mod);
	return eGCDPoly(input, mod).second;
}

vector<bool> add(vector<bool>& input1, vector<bool>& input2, vector<bool>& mod) {
	vector<bool> x = XOR(input1, input2);
	return moduloReduction(x, mod);
}

vector<bool> subtract(vector<bool>& input1, vector<bool>& input2, vector<bool>& mod) {
	vector<bool> x = XOR(input1, input2);
	return moduloReduction(x, mod);
}

vector<bool> multiply(vector<bool>& input1, vector<bool>& input2, vector<bool>& mod) {
	input1 = moduloReduction(input1, mod);
	input2 = moduloReduction(input2, mod);
	vector<bool> m = multPoly(input1, input2);
	return moduloReduction(m, mod);
}

pair<vector<bool>, vector<bool>> divide(vector<bool>& input1, vector<bool>& input2, vector<bool>& mod) {
	input1 = moduloReduction(input1, mod);
	input2 = moduloReduction(input2, mod);
	pair<vector<bool>, vector<bool>> p = divPoly(input1, input2);
	p.first = moduloReduction(p.first, mod);
	p.second = moduloReduction(p.second, mod);
	return p;
}


//Choices: 163, 233, 239, 283, 409, 571
void setMod(vector<bool>&mod, int deg) {
	mod.clear(); mod.resize(SZ, 0); mod[0] = 1;
	if (deg == 163) { mod[163] = mod[7] = mod[6] = mod[3] = 1; }
	else if (deg == 233) { mod[233] = mod[74] = 1; }
	else if (deg == 239) { mod[239] = mod[36] = 1; }
	else if (deg == 283) { mod[283] = mod[12] = mod[7] = mod[5] = 1; }
	else if (deg == 409) { mod[409] = mod[87] = 1; }
	else if (deg == 571) { mod[571] = mod[10] = mod[5] = mod[2] = 1; }
}

int main() {
	vector<bool> mod;
}