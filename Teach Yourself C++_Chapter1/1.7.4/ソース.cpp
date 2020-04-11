#include <iostream>
#include <Windows.h>
#include <chrono>

void sleep(const int second) {
	Sleep(second * 1000);
}

void sleep(const std::string& second) {
	Sleep(std::atoi(second.c_str()) * 1000);
}

int main() {
    auto start = std::chrono::system_clock::now();      // 計測スタート時刻を保存
    
	sleep(10);
	sleep("10");

	auto end = std::chrono::system_clock::now();       // 計測終了時刻を保存
	auto dur = end - start;        // 要した時間を計算
	auto sec = std::chrono::duration_cast<std::chrono::seconds>(dur).count();
	std::cout << sec << " sec \n";

	return 0;
}
