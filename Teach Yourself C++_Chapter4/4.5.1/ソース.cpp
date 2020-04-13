#include <iostream>
#include <string.h>
//#include <stdbool.h>

int main() {
	auto p = new char[100];
	auto s = "This is a test";
	std::cout << std::strlen(s);
	strcpy_s(p, std::strlen(s)+(size_t)1, s);
	delete p;
	return 0;
}