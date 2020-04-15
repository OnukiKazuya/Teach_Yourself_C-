#include <iostream>


class three_d {
	int x, y, z;
public:
	three_d(int i, int j, int k) { x = i; y = j; z = k; }
	three_d() { x = 0; y = 0; z = 0; }
	void get(int& i, int& j, int& k) { i = x; j = y; k = z; }
	friend void operator+(three_d& d, int i);
	friend void operator+(int i, three_d& d);
};

void operator+(three_d& d, int i) {
	d.x = d.x + i;
	d.y = d.y + i;
	d.z = d.z + i;
}
void operator+(int i, three_d& d) {
	d.x = d.x + i;
	d.y = d.y + i;
	d.z = d.z + i;
}

int main() {
	three_d t1(1, 2, 3);
	t1 + 3;
	3 + t1;
	int i, j, k;
	t1.get(i, j, k);
	std::cout << i << j << k << "\n";

	return 0;

}