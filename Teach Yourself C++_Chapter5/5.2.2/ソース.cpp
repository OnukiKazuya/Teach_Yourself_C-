#include <iostream>
#include <cstdlib>

class MyClass {
	int* p;
public:
	MyClass(int i) {
		p = new int;
		if (!p) { std::cerr << "Memory Allocation Error\n"; exit(1); }
		*p = i;
	}
	MyClass(const MyClass& obj) {
		p = new int;
		if (!p) { std::cerr << "Memory Allocation Error(Copy Constructor)\n"; exit(1);}
		*p = *obj.p;
	}
	~MyClass() { delete p; }
	friend int GetVal(MyClass o);
};
int GetVal(MyClass o) { return *(o.p); }
int main() {
	MyClass a(1), b(2);
	std::cout << GetVal(a) << " " << GetVal(b);
	std::cout << "\n";
	std::cout << GetVal(a) << " " << GetVal(b);
	std::cout << "\n";

	return 0;
}