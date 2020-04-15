#include <iostream>

class coord {
	int x;
	int y;
public:
	coord(int i = 0, int j = 0) { x = i; y = j; }
	bool operator<(coord obj);
	bool operator>(coord obj);
};
bool coord::operator<(coord obj) { return (x < obj.x) && (y < obj.y) ? true : false; }
bool coord::operator>(coord obj) { return (x > obj.x) && (y > obj.y) ? true : false; }



int main() {
	coord c1(2, 2), c2(3, 3);
	std::cout << "c1 < c2 :" << (c1 < c2) << "\n";
	std::cout << "c1 < c2 :" << (c1 > c2) << "\n";
	return 0;
}