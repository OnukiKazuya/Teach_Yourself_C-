#include <iostream>

int main() {

	auto f = std::cout.flags();

	std::cout.unsetf(std::ios::dec);
	std::cout.setf(std::ios::showbase | std::ios::hex);
	std::cout << 100 << "\n";

	std::cout.flags(f);  // return to original flag
	std::cout << 100 << "\n";

	return 0;
}