#include <iostream>

class MyClass {
	int a, b;
public:
	MyClass(int n, int m) { a = n; b = m; }
	int add() { return this->a + this->b; }
	void Show();
};

void MyClass::Show() {
	int t;
	t = this->add();
	std::cout << t << "\n";
}
int main() {
	MyClass ob(10, 14);
	ob.Show();
	return 0;
}