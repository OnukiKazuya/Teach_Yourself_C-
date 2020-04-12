#include <iostream>

class FeetToInch {
private:
	int Feet;
	int Inch;
public:
	FeetToInch(const int feet) {
		Feet = feet;
		Inch = Feet * 12;
		std::cout << "Inch: " << Inch << "\n";
	};
};

int main() {
	int feet;
	do
	{
		std::cout << "Type Feet : ";
		std::cin >> feet;
		if (!feet) { break; }
		FeetToInch f1(feet);
	} while (true);

	return 0;

}