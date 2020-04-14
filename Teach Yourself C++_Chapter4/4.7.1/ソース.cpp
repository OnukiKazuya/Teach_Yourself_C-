#include <iostream>
#include <cstring>
#include <cstdlib>

class StrType {
	char* p;
public:
	StrType(const char* s);
	~StrType() { std::cout << "Destructor\n";  delete[] p; }
	char* get() { return p; }
};

StrType::StrType(const char* s) {
	int l;
	l = std::strlen(s) + 1;
	p = new char[l];
	if (!p) { std::cerr << "Memory Allocation Error"; exit(1); }
	strcpy_s(p,l, s);
}
void Show(StrType& x) {
	char* s;
	s = x.get();
	std::cout << s << "\n";
}
int main() {
	StrType a("Hello"), b("There");
	Show(a);
	Show(b);
	return 0;
}