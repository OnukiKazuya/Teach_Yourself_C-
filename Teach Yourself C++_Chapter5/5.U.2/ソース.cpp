#include <iostream>

int main() {
	auto ip = new int;
	auto fp = new float;

	if (!ip || !fp) { std::cerr << "Memory Allocation Error"; exit(1); }
	delete(ip);
	delete(fp);

	return 0;
}