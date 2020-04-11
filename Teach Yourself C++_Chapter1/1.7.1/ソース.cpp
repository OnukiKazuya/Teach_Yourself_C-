#include <iostream>

int sroot(int a) { return sqrt(a); }
long sroot(long a) { return sqrt(a); }
double sroot(double a) { return sqrt(a); }

int main() {
	std::cout << sroot(3) << "\n";
	std::cout << sroot(1000000) << "\n";
	std::cout << sroot(1.33333333333)<< "\n";

	return 0;
}

