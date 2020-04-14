#include <iostream>
#include <cstdio>

class date {
	int day, month, year;
public:
	date(char* str);
	date(int m, int d, int y) {
		day = d;
		month = m;
		year = y;
	}
	date(time_t tt);
	void show() {
		std::cout << month << "/" << day << " ";
		std::cout << year << "\n";
	}
};
