#include <iostream>

class three_d {
	int x, y, z;
public:
	three_d(int i, int j, int k) { x = i; y = j; z = k; }
	three_d() { x = 0; y = 0; z = 0; }
	void get(int& i, int& j, int& k) { i = x; j = y; k = z; }
	three_d& operator+();
	three_d& operator-();
	three_d operator++();
	three_d operator--();
	void Show() { std::cout << x << y << z << "\n"; }
};

three_d& three_d::operator+() {
	if (x < 0) { x = -x; }
	if (y < 0) { y = -y; }
	if (z < 0) { z = -z; }
	return *this;
}
three_d& three_d::operator-() {
	if (x > 0) { x = -x; }
	if (y > 0) { y = -y; }
	if (z > 0) { z = -z; }
	return *this;
}
three_d three_d::operator++() {
	x++;
	y++;
	z++;
	return *this;
}
three_d three_d::operator--() {
	x--;
	y--;
	z--;
	return *this;
}
int main() {
	three_d t1(-2, -5, -8);
	+t1;
	-t1;
	++t1;
	++t1;
	--t1;
	--t1;
	t1.Show();
	return 0;
}