#include <iostream>

void order(int& x, int& y) {
	if(x>y){
		int t;
		t = x;
		x = y;
		y = t;
	}
}

int main() {
	int x, y;
	std::cout << "Type X: ";
	std::cin >> x;
	std::cout << "Type Y: ";
	std::cin >> y;
	order(x, y);
	std::cout << "x: " << x;
	std::cout << "y: " << y;
	return 0;
}