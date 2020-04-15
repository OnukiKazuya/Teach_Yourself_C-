#include <iostream>

class coord {
	int x;
	int y;
public:
	coord(int i = 0, int j = 0) { x = i; y = j; }
	coord operator--();
	coord operator--(int notused);
	void Show() { std::cout << x << "\n"; std::cout << y << "\n"; }
};

coord coord::operator--() {
	--x;
	--y;
	return *this;
}
coord coord::operator--(int notused) {
	x--;
	y--;
	return *this;
}

int main() {
	coord c1(2, 3);
	c1--;
	c1.Show();
	return 0;
}

