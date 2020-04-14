#include <iostream>

int dif(int a, int b) { return a - b; }
float dif(float a, float b) { return a - b; }

int main() {
	int (*ifp) (int a, int b);
	float (*ffp) (float a, float b);
	ifp = dif;
	ffp = dif;
	std::cout << ifp(3, 1) << "\n";
	std::cout << ffp(3.2, 1.8) << "\n";
	return 0;
}