#include <iostream>
#define SIZE 10

class Samp {
	int x;
public:
	Samp(int n) { x = n; }
	int GetX() { return x; }
};

int main() {
	Samp arr[SIZE]{ 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < SIZE; i++) { std::cout << arr[i].GetX() << "\n"; }
	return 0;
}
