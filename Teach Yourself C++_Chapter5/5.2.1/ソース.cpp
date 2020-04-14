#include <iostream>

class MyClass {
public:
	MyClass() { std::cout << "Normal Constructor\n";  };
	MyClass(const MyClass& o) { std::cout << "Copy Constructor\n"; }  // copy constructor
	MyClass f() {
		MyClass temp;
		return temp;
	}
};

int main() {
	MyClass obj;
	obj = obj.f();
	return 0;
}
