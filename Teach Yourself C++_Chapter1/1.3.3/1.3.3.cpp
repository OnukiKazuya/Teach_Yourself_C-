#include <iostream>
#include <stdio.h>

int gcd(const int a, const int b) {
	if (!b) { return a; }
	return gcd(b, a % b);
}

// main�֐�  /*�e�X�g*/
int main(void) {
	int a, b, c;
	std::cout << "2�̐�������́F";
	std::cin >> a >> b;
	c = gcd(a, b);
	std::cout << "�ő���񐔂�" << c << "\n";

	return 0;
}