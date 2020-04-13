#include <iostream>

class MyClass {
	int Num;
public:
	MyClass(int x) { Num = x; }
	friend bool IsNeg(MyClass c1);
};

bool IsNeg(MyClass c1) { return c1.Num < 0 ? true : false; }
int main() {
	MyClass c1(-1);
	std::cout << IsNeg(c1) << "\n";
	return 0;
}