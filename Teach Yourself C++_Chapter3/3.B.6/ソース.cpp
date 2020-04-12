#include <iostream>

class Sample {
	int a;
	char c;
public:
	Sample(int x, char ch) { a = x; c = ch; }
};

int main() {
	Sample s1(100, 'X');
	return 0;
}