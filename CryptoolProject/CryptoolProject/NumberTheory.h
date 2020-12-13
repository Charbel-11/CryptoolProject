#pragma once
#include <vector>
using namespace std;
typedef long long ll;

struct NumberTheory {
	ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
	ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

	vector<pair<ll, int>> primeFact(ll x) {
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

	ll eulerTotient(ll n) {
		ll res = n;
		for (ll i = 2; i * i <= n; i++) {
			if (n % i) { continue; }
			while (n % i == 0) { n /= i; }
			res -= res / i;
		}
		if (n > 1) { res -= res / n; }
		return res;
	}

	ll power(ll x, ll n) {
		ll res = 1;
		for (; n; n >>= 1, x *= x)
			if (n & 1) res *= x;
		return res;
	}

	ll modularPower(ll x, ll n, const ll mod) {
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




	// a*x - b*y = return value = GCD(a,b). x,y >= 0
	ll egcd(ll a, ll b, ll& x, ll& y) {
		if (b == 0) {
			x = 1; y = 0;
			return a;
		}
		ll d = egcd(b, a % b, y, x);
		y = a - x * (a / b) - y;
		x = b - x;
		return d;
	}
	// modular inverse; works for any mod p (coprime with a)
	ll modInverse(ll a, ll p) {
		ll x, y;
		egcd(a % p + p, p, x, y);
		return x % p;
	}
	// Given x = a (mod m) and x = b (mod n)
	// returns res such that x = res (mod lcm(m,n))
	ll CRT2(ll a, ll m, ll b, ll n) {
		b = (b + n - (a % n)) % n;
		ll d = gcd(m, n);
		ll oldM = m;
		m /= d; b /= d; n /= d;
		return ((b * modInverse(m, n)) % n) * oldM + a;
	}
	//Given x = a[i] mod m[i] for each i, we find x mod the product of m[i] for all i
	ll CRT(vector<ll> a, vector<ll> m) {
		ll A = a[0]; ll curM = m[0];
		for (int i = 1; i < a.size(); i++) {
			A = CRT2(A, curM, a[i], m[i]);
			curM *= m[i];
		}
		return A;
	}
	//Given A, returns a[i] for each i
	vector<ll> reverseCRT(ll A, vector<ll> m) {
		vector<ll> a(m.size());
		for (int i = 0; i < m.size(); i++) { a[i] = A % m[i]; }
		return a;
	}
};