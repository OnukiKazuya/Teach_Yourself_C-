#include <iostream>

void print(const std::string& s, int i = 0) {
	std::cout << s << "\n";
}
void print(const std::string& s) {
	std::cout << s << "\n";
}

int main() {
	print("ONUKI");
	return 0;
}