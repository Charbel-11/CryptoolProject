#pragma once
#include <vector>
using namespace std;
typedef long long ll;

class NumberTheory {
	static ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
	static ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

	static vector<pair<ll, int>> primeFact(ll x) {
		vector<pair<ll, int>> res;
		for (ll i = 2; i * i <= x; i++) {
			if (x % i) { continue; }
			ll p = i; int e = 0;
			while (x % p == 0) { x /= p; e++; }
			res.push_back({ p, e });
		}
		if (x != 1) { res.push_back({ x, 1 }); }
		return move(res);
	}

	static ll eulerTotient(ll n) {
		ll res = n;
		for (ll i = 2; i * i <= n; i++) {
			if (n % i) { continue; }
			while (n % i == 0) { n /= i; }
			res -= res / i;
		}
		if (n > 1) { res -= res / n; }
		return res;
	}

	static ll power(ll x, ll n) {
		ll res = 1;
		for (; n; n >>= 1, x *= x)
			if (n & 1) res *= x;
		return res;
	}

	static ll modularPower(ll x, ll n, const ll mod) {
		ll res = 1;
		for (; n; n >>= 1, x = (x * x) % mod)
			if (n & 1) res = (res * x) % mod;
		return res;
	}


	bool millerRabin(ll d, int p, ll n) {
		int r = rand() % (n - 4) + 2;
		int x = modularPower(r, d, n);
		if (x == 1 || x == n - 1) { return 1; }
		for (int i = 0; i < p - 1; i++)
		{
			x = modularPower(x, 2, n);
			if (x == 1) { return 0; }
			if (x == n - 1) { return 1; }
		}
		return 0;
	}

	//Checks if n is prime using k iterations of Miller-Rabin's algorithm
	bool isPrime(int n, int k) {
		if (n == 1 || n == 0 || n == 4) { return 0; }
		if (n == 2 || n == 3) { return 1; }

		int d = n - 1, p = 0;
		while (d % 2 == 0) { d /= 2; p++; }
		for (int i = 0; i < k; i++) {
			if (!millerRabin(d, p, n)) { return 0; }
		}
		return 1;
	}
};