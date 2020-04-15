#include <iostream>

class coord {
	int x;
	int y;
public:
	coord(int i = 0, int j = 0) { x = i; y = j; }
	friend coord operator+(coord ob1, coord ob2);
	friend coord operator/(coord ob1, coord ob2);
	friend coord operator*(int a, coord ob1);
	friend coord operator*(coord ob1, int a);
	void Show() { std::cout << "x: " << x << " y: " << y << "\n"; }
};

coord operator+(coord ob1, coord ob2) {
	coord temp;
	temp.x = ob1.x + ob2.x;
	temp.y = ob1.y + ob2.y;
	return temp;
}
coord operator/(coord ob1, coord ob2) {
	coord temp;
	temp.x = ob1.x / ob2.x;
	temp.y = ob1.y / ob2.y;
	return temp;
}
coord operator*(int a, coord ob1) {
	coord temp;
	temp.x = a * ob1.x;
	temp.y = a * ob1.y;
	return temp;
}
coord operator*(coord ob1, int a) {
	coord temp;
	temp.x = a * ob1.x;
	temp.y = a * ob1.y;
	return temp;
}
int main() {
	coord c1(2, 3), c2(2, 3);
	auto c3 = c1 * 2;
	auto c4 = 2 * c1;
	c3.Show();
	c4.Show();
	return 0;
}