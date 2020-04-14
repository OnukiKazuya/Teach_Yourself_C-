#include <iostream>
#include <cstring>
#include <cstdlib>

class StrType {
	char* p;
	int len;
public:
	StrType(const char* ptr);
	~StrType();
	void show();
};

StrType::StrType(const char* ptr) {
	len = std::strlen(ptr);
	p = new char[len+1];
	if (!p) { std::cerr << "MemoryAllocation Error\n"; exit(1); }
	strcpy_s(p, len+1, ptr);
}
StrType::~StrType() {
	std::cout << "release p\n";
	std::cout << "p:" << p << "\n";
	delete [] p;
}
void StrType::show() {
	std::cout << p << "Length: " << len;
	std::cout << "\n";
}
int main() {
	StrType s1("This is a test."), s2("I like C++.");
	s1.show();
	s2.show();

	return 0;
}