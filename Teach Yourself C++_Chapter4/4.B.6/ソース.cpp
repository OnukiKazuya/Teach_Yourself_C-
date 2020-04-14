#include <iostream>

int Neg(int* a) { return *a < 0 ? -(*a) : *a; }
int Neg(int& a) { return a < 0 ? -a : a; }

int main() {
	int i;
	std::cout << "Type Integer You Like : ";
	std::cin >> i;
	std::cout << "Neg(int* a) :" << Neg(&i) << "\n";
	std::cout << "Neg(int& a) :" << Neg(i) << "\n";

	return 0;

}
