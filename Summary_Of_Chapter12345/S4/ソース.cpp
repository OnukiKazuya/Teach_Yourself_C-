#include <iostream>

class Samp {
	int a;
public:
	Samp(int n=0) { a = n; }
	int GetA() { return a; }
};

int main() {
	Samp ob(88);
	Samp obarray[10];

	for (int i = 0; i < 10; i++) { std::cout << obarray[i].GetA() << "\n"; }
	std::cout << ob.GetA() << "\n";
	return 0;
}