#include <iostream>
#define SIZE 10

class Squares {
	int num, sqr;
public:
	Squares(int a, int b) { num = a; sqr = b; }
	void Show() { std::cout << num << " " << sqr << "\n"; }
};
int main() {
	Squares arr[SIZE]{
		Squares(1, pow(1,2)),Squares(2,pow(2,2)),
		Squares(3, pow(3,2)), Squares(4,pow(4,2)),
		Squares(5, pow(5,2)),Squares(1, pow(1,2)),
		Squares(2,pow(2,2)),Squares(3, pow(3,2)), 
		Squares(4,pow(4,2)),Squares(5, pow(5,2))
	};
	for (int i = 0; i < SIZE; i++) { arr[i].Show(); }
	return 0;
}
