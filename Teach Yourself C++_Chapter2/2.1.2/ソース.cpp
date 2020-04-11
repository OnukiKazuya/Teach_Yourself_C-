#include <iostream>
#include <ctime>
#include <Windows.h>

class StopWatch {
private:
	std::clock_t ProcTime;
	std::clock_t Start;
	std::clock_t End;
public:
	StopWatch();
	~StopWatch();
	void stop();
	void start();
};

StopWatch::StopWatch() { ProcTime = 0; }
StopWatch::~StopWatch() {
	ProcTime = (End - Start) / CLOCKS_PER_SEC;
	std::cout << "Processing Time: " << ProcTime << "[sec]" << "\n";
}
void StopWatch::start() { Start = std::clock(); }
void StopWatch::stop() { End = std::clock(); }

int main() {
	const int SleepMsec = 5000;
	StopWatch S1;
	S1.start();
	Sleep(SleepMsec);
	S1.stop();

	return 0;
}