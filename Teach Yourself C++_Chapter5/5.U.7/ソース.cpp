#include <iostream>

void mag(long& num, const long order) {
	num = num * pow(10, order);
}
int main() {
	long a, b;
	std::cout << "type num: ";
	std::cin >> a;
	std::cout << "type order: ";
	std::cin >> b;
	std::cout << "befor: " << a << "\n";
	mag(a, b);
	std::cout << "after: " << a << "\n";
	return 0;
}