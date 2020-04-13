#include <iostream>

class Samp {
	int a, b;
public:
	Samp(int n, int m) { a = n; b = m; }
	int Geta() { return a; }
	int Getb() { return b; }
};
int main() {
	Samp ob[4]{
		Samp(1,2), Samp(3,4),
		Samp(5,6), Samp(7,8)
	};
	int i;
	Samp* p;
	p = std::end(ob)-1; // std::end => return end index + 1 
	for (int i = 0; i < 4; i++) {
		std::cout << p->Geta() << " ";
		std::cout << p->Getb() << "\n";
		p--;
	}
	return 0;
}