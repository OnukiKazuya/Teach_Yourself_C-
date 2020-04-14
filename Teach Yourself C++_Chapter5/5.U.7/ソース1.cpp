#include <iostream>

std::string reverse(std::string str, int count=0){
	if (!count) { return str; }
	else if (count > str.size()) { std::cerr << "count > string size!\n"; return str; }
	else {
		auto first = str.substr(0, count);
		auto second = str.substr(count+1, str.size());
		std::reverse(first.begin(), first.end());
		return first + second;
	}
}
int main() {
	int i;
	std::cout << "reverse word count:";
	std::cin >> i;
	std::cout << reverse("JUSTIN BIEBER", i);
}