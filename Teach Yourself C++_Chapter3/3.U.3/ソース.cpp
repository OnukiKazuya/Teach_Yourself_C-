#include <iostream>

class Stack {
private:
	std::shared_ptr<char[]> Stck;
	int SIZE;
public:
	Stack(int Size) { 
		SIZE = Size;
		Stck = std::shared_ptr<char[]>(new char[SIZE]); 
	}
	void LoadStack() {
	
		for (int i = 0; i < SIZE; i++) {
			Stck[i] = 'a' + i;
		}
	}
	void ShowValue() {
		for (int i = 0; i < SIZE; i++) {
			std::cout << Stck[i] << "\n";
		}
	}
};

int main() {
	Stack s1(4), s2(4);
	s1.LoadStack();
	s2 = s1;
	std::cout << "s1‚Ì’lF";
	s1.ShowValue();
	std::cout << "\n s2‚Ì’l: ";
	s2.ShowValue();

	return 0;

}


