#include <iostream>
class coord {
	int x;
	int y;
public:
	coord(int i = 0, int j = 0) { x = i; y = j; }
	coord operator+(coord obj);
	coord operator+();
	void Show() {
		std::cout << "x: " << x << "y: " << y << "\n";
	}
};

coord coord::operator+(coord obj) {
	coord temp;
	temp.x = x + obj.x;
	temp.y = y + obj.y;
	return temp;
}
coord coord::operator+() {
	if (x < 0) { x = -x; }
	if (y < 0) { y = -y; }
	return *this;
}

int main() {
	coord c1(-2, -3), c2(2, 3);
	+c1;
	c1.Show();
	auto c3 = c1 + c2;
	c3.Show();
	return 0;
}