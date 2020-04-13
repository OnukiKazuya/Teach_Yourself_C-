#include <iostream>

class Summation {
	int Num;
	long Sum;
public:
	void SetSum(int n);
	void ShowSum(){
		std::cout << Num << "‘Œv‚Í" << Sum << "\n";
	}
};

void Summation::SetSum(int n) {
	Num = n;
	Sum = 0;
	for (int i = 0; i <= Num; i++) { Sum += 1; }
}

Summation MakeSum() {
	int i;
	do {
		std::cout << "Type Plus Value: ";
		std::cin >> i;
	} while (i <= 0);
	Summation s1;
	s1.SetSum(i);
	return s1;
}

int main() {
	auto S1 = MakeSum();
	S1.ShowSum();
	return 0;
}