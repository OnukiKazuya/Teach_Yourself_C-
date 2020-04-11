#include <stdio.h>
#include <iostream>

int main() {
	int WorkTime, CostPerTime;

	std::cout << "労働時間：";
	std::cin >> WorkTime;
	std::cout << "時給：";
	std::cin >> CostPerTime;
	std::cout << "合計賃金：" << WorkTime*CostPerTime;
	
	return 0;
}