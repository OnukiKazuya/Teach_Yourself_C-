#include <iostream>

class Stack {
private:
	int tos;
	int size;
	std::shared_ptr<char[]> stck;
	std::string who;
public:
	Stack(const std::string& c, const int Size);
	void Push(const char ch);
	char Pop();
};

Stack::Stack(const std::string& c, const int Size) {
	tos = 0;
	who = c;
	size = Size;
	std::cout << "生成 スタック " << who << "\n";
	

	stck = std::shared_ptr<char[]>(new char[size]);
}

void Stack::Push(const char ch) {
	if (tos == size) { std::cout << "スタック" << who << "はいっぱいです\n"; }
	stck[tos] = ch;
	tos++;
}

char Stack::Pop() {
	if (tos == 0) { std::cout << "スタック" << who << " は空です\n"; }
	tos--;
	return stck[tos];
}

int main() {
	Stack s1("A", 10), s2("B", 10);
	int i;
	s1.Push('a');
	s2.Push('x');
	s1.Push('b');
	s2.Push('y');
	s1.Push('c');
	s2.Push('z');

	std::cout << "s1 Pop Value is " << s1.Pop() << "\n";
	std::cout << "s2 Pop Value is " << s2.Pop() << "\n";

	return 0;

}

