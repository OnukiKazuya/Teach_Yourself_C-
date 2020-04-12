#include <iostream>

class myclass {
private:
	int i, j;
public:
	myclass(int x,int y){ i = x; j = y; }
	void show() { std::cout << i << " " << j << "\n"; }
};

int main() {
	union {
		float f;
		unsigned int bits;
	};

	f = 3.2;
	std::cout << f << "\n";
	bits = 2;
	std::cout << f << bits << "\n";
	myclass count(2, 3);
	count.show();
	return 0;
}
