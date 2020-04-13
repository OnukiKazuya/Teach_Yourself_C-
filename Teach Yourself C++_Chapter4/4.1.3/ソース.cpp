#include <iostream>
#define SIZE 10

class Letters {
	char ch;
public:
	Letters(char c) { ch = c; }
	char GetCh() { return ch; }
};

int main() {
	Letters arr[SIZE]{ 
		Letters('1'),Letters('1'), Letters('1'), Letters('1'), 
		Letters('1'), Letters('1'), Letters('1'), Letters('1'), 
		Letters('1'), Letters('1')
	};
	for (int i = 0; i < SIZE; i++) {
		std::cout << arr[i].GetCh() << "\n";
	}
	return 0;
}