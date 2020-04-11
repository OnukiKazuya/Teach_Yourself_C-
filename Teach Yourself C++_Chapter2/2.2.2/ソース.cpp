#include <iostream>
#include <ctime>
#define _CRT_SECURE_NO_WARNINGS

class TimeAndDate{
private:
	std::shared_ptr<char> Time;
public:
	TimeAndDate(std::shared_ptr<char> time);
	void ShowInfo();

};

TimeAndDate::TimeAndDate(std::shared_ptr<char> time) { Time = time; }
void TimeAndDate::ShowInfo() { std::cout << "Time And Date is " << Time << "\n"; }



int main() {
	std::time_t result = std::time(nullptr);
	auto time = std::shared_ptr<char>(std::asctime(std::localtime(&result)));
	class TimeAndDate tad1(time);
	tad1.ShowInfo();
	return 0;

}