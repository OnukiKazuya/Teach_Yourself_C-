#include <iostream>

class Dice {
private:
	int RandNum;
public:
	void Roll() {
		RandNum = rand() % 6 + 1;
		std::cout << "Number is : " << RandNum;
	}
};

int main() {
	Dice d1;
	d1.Roll();
	return 0;
}