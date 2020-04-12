#include <iostream>
#include <cstdlib>

class dyna {
	int* p;
public:
	dyna(int i);
	~dyna() { free(p); std::cout << "Released!\n"; }
	int get() { return *p; }
};

dyna::dyna(int i) {
	p = new int;
	if (!p) { std::cout << "Memory Allocation Failed!\n"; exit(1); }
	*p = i;
}

int neg(dyna ob) { return -ob.get(); }
int main() {
	dyna o(-10);
	std::cout << o.get() << "\n";
	std::cout << neg(o) << "\n";

	std::cout << o.get() << "\n";
	std::cout << neg(o) << "n";

	return 0;
}