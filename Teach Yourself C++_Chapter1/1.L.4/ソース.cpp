#include <iostream>

std::string rev_str(std::string& S1) {
	std::reverse(S1.begin(), S1.end());
	return S1;
}
std::string rev_str(const std::string& S1, std::string& S2) {
	std::reverse(S2.begin(), S2.end());
	return S2;
}

int main() {
	std::string S1 = "JUSTIN";
	std::string S2 = "BIEBER";

	std::cout << "rev of " << S1;
	auto S3 = rev_str(S1);
	std::cout << " is " << S3 << "\n";

	std::cout << "rev of " << S2;
	auto S4 = rev_str(S1, S2);
	std::cout << " is " << S4;

	return 0;

}