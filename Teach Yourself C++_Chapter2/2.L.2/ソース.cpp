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
	std::system("pause");//���s����ɂ͉����L�[�������Ă�������...
	std::system("cls");//��ʃN���A
}

int main() {
	line l1(DATANUM);
	return 0;
}