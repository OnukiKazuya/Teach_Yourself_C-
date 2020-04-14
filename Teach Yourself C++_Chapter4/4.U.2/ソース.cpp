#include <iostream>

class a_type {
	double a, b;
public:
	a_type(double x, double y) {
		a = x;
		b = y;
	}
	friend void show(a_type* cp);
};
void show(a_type* cp) { std::cout << cp->a << " " << cp->b << "\n"; }

int main() {
	a_type arr[2][5]{
		a_type(1,1),a_type(1,1),a_type(1,1),a_type(1,1),a_type(1,1),
		a_type(1,1),a_type(1,1),a_type(1,1),a_type(1,1),a_type(1,1)
	};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			show(&arr[i][j]);
		}
	}
	return 0;
}