#include "Affine Cipher.h"

int main() {
	AffineCipher af1(5, 11);
	AffineCipher af2('M', 'K');

	cout << af1.encrypt("MAXWELL") << '\n';
	cout << af1.decrypt("UFOOD") << '\n';
	cout << af2.getA() << ' ' << af2.getB() << '\n';
	cin.ignore(2); return 0;
}