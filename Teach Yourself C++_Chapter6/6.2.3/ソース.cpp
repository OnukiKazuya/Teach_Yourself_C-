#include <iostream>

class coord {
	int x;
	int y;
public:
	coord(int i = 0, int j = 0) { x = i; y = j; }
	int operator*(coord obj);
	coord operator/(coord obj);
	void GetXy() { std::cout << "X: " << x << "\n"; std::cout << "Y: " << y << "\n"; }
};

int coord::operator*(coord obj) {  // 演算子関数の戻り値の型をオブジェクト以外にしてみる
	coord temp;
	temp.x = x * obj.x;
	temp.y = y * obj.y;
	return temp.x;
}
coord coord::operator/(coord obj) {
	coord temp;
	temp.x = x / obj.x;
	temp.y = y / obj.y;
	return temp;
}

int main() {
	coord c1(2, 3), c2(2, 3);
	coord temp1, temp2;

	auto a = c1 * c2;
	temp2 = c1 / c2;

	std::cout << a << "\n";
	temp2.GetXy();

	return 0;
}
