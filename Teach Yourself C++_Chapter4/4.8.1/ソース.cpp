#include <iostream>

class Array {
	int size;
	int* p;
public:
	Array(int num) { 
		p = new int[num];
		if (!p) { std::cerr << "Memory Allocation Error\n"; exit(1); }
		size = num;
	}
	int& put(int i) {
		if (i<0 || i>size - 1) { std::cerr << "Bounding Error\n"; exit(1); }
		return p[i];
	}
	int get(int i) {
		if (i<0 || i>size - 1) { std::cerr << "Bounding Error\n"; exit(1); }
		return p[i];
	}
};
int main() {
	Array a(6);
	a.put(3) = 100;
	a.put(2) = 10;
	std::cout << a.get(2) << a.get(3);
	std::cout << "\n";
	a.put(7) = 0;
	return 0;
}