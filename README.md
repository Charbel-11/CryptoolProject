# Cryptool Project
This is an application that performs a variety of encryptions schemes and cryptographic algorithms showing step-by-step results

## Classical Encryption
The user can encrypt/decrypt a text using one of the following encryption schemes (with a key):
* Affine Cipher
  * Encrypts/decrypts according to the parameters of the linear transformation Y=ax+b (a and b represent the key)
  * Decrypts a ciphertext given the most 2 frequent letters in the encrypted alphabet
* Mono-Alphabetic Cipher (The key is a permutation of the alphabet)
* Vigenère Cipher (Must be a single word consisting of english characters only)
* Playfair Cipher (The key must consist of unique symbols only)
* Hill Cipher (The key consists of a word with a perfect square number of letter, who must be invertible in Z26)
## DES Implementation
The key should be a 16 hexadecimal digits.\
When encrypting/decrypting, the results of the 16 rounds of DES are displayed. For each round, the result after each operation (expansion, key mixing, substitution and permutation) is also displayed
## AES Implementation
Implements AES-128, AES-192, and AES-256.\
The inputs message/ciphertext should consist of 32 hexadecimal digits and the key is 32/48/64 hexadecimal digits.\
The result of each round is displayed as a 4x4 byte matrix.
## Number Theory
* Extended Euclid Algorithm: Given two inputs X,Y, it computes both their gcd and their Bezout coefficients
* Fast Exponentiation: Finds x^n mod m given x, n and m
* Prime Factorization: Gets the prime factorization of a number *n*
* Chinese Remainder Theorem: Given equations of the form x mod b=c where b, c are known, finds a solution for x (If we have a mod b=c, a mod e=f, we input “b,c;d,e;”; in other words comma is mod and ; is the separation between different relations)
* Miller Rabin: Given a number *x* and the number of rounds *k*, the output either "prime" or "composite"
* Totient Function: Finds the totient function of a number *n*
## Polynomial Arithmetic
The user needs to choose the degree 𝑚 of the irreducible polynomial they will work with. Irreducible polynomials of degrees 2, 3, 4, 5, 6, 7, 8, 163, 233, 239, 283, 409, 571 are available.\
Then, the user has to pick some operation between addition, subtraction, multiplication, division, finding the inverse or the mod. All of which will be executed in GF(2<sup>m</sup>).\
Once those are chosen, the user has to input 1 (or 2 in case of binary operation) numbers in hexadecimal form.\
After clicking submit, the result is displayed.
