#include <iostream>
#define DATANUM 10

class line {
private:
	int Line;
public:
	line(int value);
	~line();
};

inline line::line(int value) {
	Line = value;
	for (int i = 0; i < Line; i++) {
		std::cout << "*";
	}
	std::cout << "\n";
}
inline line::~line() {
	std::cout << "Delete OK?[if ok, enter] : ";
	std::system("pause");//続行するには何かキーを押してください...
	std::system("cls");//画面クリア
}

int main() {
	line l1(DATANUM);
	return 0;
}