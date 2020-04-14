#include <iostream>

double recip(double& d) {
	return 1 / d;
}

int main() {
	double a = 3.5;
	std::cout << recip(a) << "\n";
	return 0;
}