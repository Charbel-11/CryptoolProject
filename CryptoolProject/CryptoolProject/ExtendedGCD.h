#pragma once
#include <vector>
using namespace std;

class ExtendedGCD {
	static pair<int, pair<int, int>> find(int a, int b) {
		bool s = a < b; if (s) { swap(a, b); s = true; }
		int A1 = 1, A2 = 0, A3 = a;
		int B1 = 0, B2 = 1, B3 = b;
		while (B3) {
			int T1 = B1, T2 = B2, T3 = B3, Q = A3 / B3;
			B1 = A1 - Q * B1; B2 = A2 - Q * B2; B3 = A3 - Q * B3;
			A1 = T1; A2 = T2; A3 = T3;
		}
		if (s) { swap(A1, A2); }
		return { A3, {A1, A2} };
	}
};