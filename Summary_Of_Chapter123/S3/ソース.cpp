#include <iostream>

class base {
	int a;
public:
	void load_a(int n) { a = n; }
	int get_a(){ return a; }
};

class derived : public base {
	int b;
public:
	void load_b(int n) { b = n; }
	int get_b() { return b; }
};

int main() {
	derived d1, d2;
	d1.load_a(3);
	d1.load_b(2);

	std::cout << d1.get_a() << d1.get_b() << "\n";

	d2 = d1;

	std::cout << d2.get_a() << d2.get_b() << "\n";



}