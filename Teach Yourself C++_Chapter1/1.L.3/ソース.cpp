#include <iostream>


void ShowValue(const int Base, const int Value) {
	std::cout << std::pow(Base, Value);
}

int main() {
	int Base, Value;
	std::cout << "Base: ";
	std::cin >> Base;
	std::cout << "\n" << "Value: ";
	std::cin >> Value;


	std::cout << "Answer is ";
	ShowValue(Base, Value);
	std::cout << "\n";

	return 0;
}