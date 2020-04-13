#include <iostream>

int main() {
	auto fp = new float;
	auto lp = new long;
	auto cp = new char;
	if (!fp || !lp || !cp) { 
		std::cerr << "Memory Allocation Error"; 
		return 1; 
	}
	else {
		*fp = 1.11;
		*lp = 1000000000000;
		*cp = 'a';
	}

	std::cout << *fp << " " << *lp << " " << *cp << "\n";
	delete fp;
	delete lp;
	delete cp;
	return 0;

}