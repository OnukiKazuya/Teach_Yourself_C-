#include <iostream>

inline int MyAbs(int a) { return a < 0 ? -a : a; }
inline long MyAbs(long a) { return a < 0 ? -a : a; }
inline double MyAbs(double a) { return a < 0 ? -a : a; }

int main() {
	std::cout << "MyAbs(-5) : " << MyAbs(-5) << "\n";
	std::cout << "MyAbs(-500000) : " << MyAbs(-500000) << "\n";
	std::cout << "MyAbs(-5.333333) : " << MyAbs(-5.333333) << "\n";

	return 0;
}
