#include <iostream>

int main() {
	
	std::cout.setf(
		std::ios::showpos|std::ios::showpoint|std::ios::scientific|std::ios::uppercase
	);
	std::cout << 32.3333333333333 << "\n";
	return 0;
}
