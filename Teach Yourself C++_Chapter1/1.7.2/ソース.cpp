#include <iostream>
std::string min(const std::string& a, const std::string& b) { 
	return (a < b) ? a : b; 
}

int min(const int a, const int b) {
	return (a < b) ? a : b;
}

double min(const double a, const double b) {
	return (a < b) ? a : b;
}

int main() {
	std::cout << min("aaaa", "bbbbbbb")<< "\n";
	std::cout << min(1, 2) << "\n";
	std::cout << min(1.3333, 2.22222) << "\n";

	return 0;

}