#include <iostream>
#include <cstring>
#include <stdlib.h>
class dynarray {
	int* p;
	int size;
public:
	dynarray(int s) {
		size = s;
		p = new int[size];
		if (!p) { std::cerr << "MemoryAllocationError\n"; exit(1); }
	}
	int& put(int i) { p[i] = i;  return p[i]; }
	int get(int i) { return p[i]; }
	dynarray& operator=(dynarray& obj);
};

dynarray& dynarray::operator=(dynarray& obj) {
	dynarray temp(obj.size);
	strcpy_s(temp.p, ,  obj.p);
	return temp;
}

int main() {
	dynarray c1(3);
	for (int i = 0; i < 3; i++) { c1.put(i); }
	for (int i = 0; i < 3; i++) { std::cout << c1.get(i) << "\n"; }
}