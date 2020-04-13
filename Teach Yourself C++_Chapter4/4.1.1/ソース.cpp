#include <iostream>
#define SIZE 10

class Letters {
	char ch;
public:
	Letters(char c) { ch = c; }
	char GetCh() { return ch; }
};

int main() {
	Letters arr[SIZE]{ '1','2','3','4','5','6','7','8','9','10' };
	for (int i = 0; i < SIZE; i++) { 
		std::cout << arr[i].GetCh() << "\n"; 
	}
	return 0;
}