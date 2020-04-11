#include <iostream>

class MyClass {
private:
	int a;
public:
	void set_a(int num);
	int get_a();
};

void MyClass::set_a(int num){ a = num; }
int MyClass::get_a() { return a; }

int main() {
	MyClass ob1, ob2;

	ob1.set_a(10);
	ob2.set_a(99);

	std::cout << ob1.get_a() << "\n";
	std::cout << ob2.get_a() << "\n";

	return 0;
}
