#include <iostream>
#include <stdio.h>
#include <windows.h>

class prompt {
private:
	int count;
public:
	prompt(const std::string& Msg, const int BeepNum) {
		std::cout << Msg << "\n";
		count = BeepNum;
	}
	~prompt() {
		for (int i = 0; i < count; i++) {
			Beep(440, 200);
		}
	}
};

int main() {
	prompt p1("Justin Bieber", 2);
	return 0;
}