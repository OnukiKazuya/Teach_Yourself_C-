#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

class AreaInfo {
public:
	double height;
	double width;
};

class Cylinder : public AreaInfo {
private:
	double r;
public:
	Cylinder(double Height, double R) {
		height = Height;
		r = R;
	}
	double CalcArea() { return 2 * M_PI * pow(r, 2) * M_PI * 2 * r * height; }
};

int main() {
	Cylinder c1(20, 10);
	std::cout << "Area of Cylinder : " << c1.CalcArea() << "\n";
	return 0;
}