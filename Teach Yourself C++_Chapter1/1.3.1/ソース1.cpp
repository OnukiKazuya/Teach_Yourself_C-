#include <stdio.h>
#include <iostream>

int main() {
	int WorkTime, CostPerTime;

	std::cout << "�J�����ԁF";
	std::cin >> WorkTime;
	std::cout << "�����F";
	std::cin >> CostPerTime;
	std::cout << "���v�����F" << WorkTime*CostPerTime;
	
	return 0;
}