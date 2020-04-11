#include <iostream>
#include <stdio.h>

int gcd(const int a, const int b) {
	if (!b) { return a; }
	return gcd(b, a % b);
}

// main関数  /*テスト*/
int main(void) {
	int a, b, c;
	std::cout << "2つの整数を入力：";
	std::cin >> a >> b;
	c = gcd(a, b);
	std::cout << "最大公約数は" << c << "\n";

	return 0;
}