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
    auto start = std::chrono::system_clock::now();      // �v���X�^�[�g������ۑ�
    
	sleep(10);
	sleep("10");

	auto end = std::chrono::system_clock::now();       // �v���I��������ۑ�
	auto dur = end - start;        // �v�������Ԃ��v�Z
	auto sec = std::chrono::duration_cast<std::chrono::seconds>(dur).count();
	std::cout << sec << " sec \n";

	return 0;
}
