#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>
#include <vector>

std::vector<long> MyStrtol(const std::string& start, char** end, int base=10) {
	std::vector<long> lv;
	auto ei = std::end(start);
	auto i = start.find(" ");
	if (i == std::string::npos) {
		if (std::all_of(start.cbegin(),start.cend(),isdigit)) { 
			lv.push_back(std::strtol(start.c_str(), end, base));
			return lv;
		}
		else { return lv; }
	}
	else {

		std::string substr = start.substr(0, i);
		if (std::all_of(substr.cbegin(), substr.cend(), isdigit)) {
			lv.push_back(std::strtol(substr.c_str(), end, base));
		}
		else { return lv; }
	}
}

int main() {
	char* end;
	auto lv = MyStrtol("123", &end, 10);
	if (lv.empty()) { std::cerr << "No Number\n"; return 1; }
	else {
		for (auto itr = lv.begin(); itr != lv.end(); ++itr) {
			std::cout << *itr << "\n";
		}
		return 0;
	}
	return 0;
}
