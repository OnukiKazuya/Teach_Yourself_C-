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
	StopWatch(clock_t ct);
	~StopWatch();
	void stop();
	void start();
};

StopWatch::StopWatch() { ProcTime = 0; }
StopWatch::StopWatch(clock_t ct) { Start = ct; }
StopWatch::~StopWatch() {
	ProcTime = (End - Start) / CLOCKS_PER_SEC;
	std::cout << "Processing Time: " << ProcTime << "[sec]" << "\n";
}
void StopWatch::start() { Start = std::clock(); }
void StopWatch::stop() { End = std::clock(); }

int main() {
	const int SleepMsec = 5000;
	auto ct = std::clock();
	StopWatch S1, S2(ct);
	S1.start();
	Sleep(SleepMsec);
	S1.stop();
	S2.stop();

	return 0;
}