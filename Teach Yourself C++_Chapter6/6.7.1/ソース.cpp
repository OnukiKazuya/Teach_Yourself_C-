#include <iostream>

class coord {
	int x;
	int y;
public:
	coord(int i = 0, int j = 0) { x = i; y = j; }
	coord operator<<(int i);
	coord operator>>(int i);
	void Show() { std::cout << x << y << "\n"; }
};

coord coord::operator<<(int i) {
	x << i;
	y << i;
	return *this;
}
coord coord::operator>>(int i) {
	x >> i;
	y >> i;
	return *this;
}

int main() {
	coord c1(2, 3);
	c1 << 1;
	c1 >> 1;
	c1.Show();
	return 0;
}