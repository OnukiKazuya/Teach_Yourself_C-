#include <iostream>

class three_d {
	int x, y, z;
public:
	three_d(int i, int j, int k) { x = i; y = j; z = k; }
	three_d() { x = 0; y = 0; z = 0; }
	void get(int& i, int& j, int& k) { i = x; j = y; k = z; }
	bool operator==(three_d obj);
	bool operator!=(three_d obj);
	void Show() { std::cout << x << y << z << "\n"; }
};
bool three_d::operator==(three_d obj) {
	if ((x == obj.x) && (y == obj.y) && (z == obj.z)) { return true; }
	else { return false; }
}
bool three_d::operator!=(three_d obj) {
	if ((x != obj.x) && (y != obj.y) && (z != obj.z)) { return true; }
	else { return false; }
}

int main() {
	three_d t1(3, 3, 3), t2(3, 3, 3);
	std::cout << (t1 == t2) << "\n";
	std::cout << (t1 != t2) << "\n";
	return 0;
}