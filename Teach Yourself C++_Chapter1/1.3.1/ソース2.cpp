#include <iostream>
#include <stdio.h>

int main() {
	int Feet;
	const int FeetToInch = 12;
	
	do {
		std::cout << "Feet: ";
		std::cin >> Feet;
		std::cout << Feet * FeetToInch << "[inch] \n" ;
	} while (Feet != 0);

	return 0;
}