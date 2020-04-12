#include <iostream>

class AreaInfo {
public:
	double height;
	double width;
};

class Rectangle : public AreaInfo {  //�x�[�X�N���X�̌��J�v�f�̂݃A�N�Z�X�\
public:
	Rectangle(double Height, double Width) {
		height = Height;
		width = Width;
	}
	double CalcArea() { return height * width; }
};

int main() {
	Rectangle r1(20, 30);
	std::cout << "Area : " << r1.CalcArea() << "\n";
	return 0;
}