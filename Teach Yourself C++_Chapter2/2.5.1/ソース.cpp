#include <iostream>
#define ARRSIZE 5

struct Stack {
public:
	Stack(const int size);
	void Push(char ch);
	char Pop();
private:
	std::shared_ptr<char[]>Stck;
	int Tos;
	int Size;
};

Stack::Stack(const int size) {
	std::cout << "Gerated Stack\n";
	Tos = 0;
	Size = size;
	Stck = std::shared_ptr<char[]>(new char[Size]);
}
void Stack::Push(char ch) {
	if (Tos == Size) { std::cout << "Full Stack\n"; }
	Stck[Tos] = ch;
	Tos++;
}
char Stack::Pop() {
	if (Tos == 0) { std::cout << "Empty Stack\n"; }
	Tos--;
	return Stck[Tos];
}
int main() {
	Stack s1(ARRSIZE), s2(ARRSIZE);
	int i;
	s1.Push('a');
	s2.Push('x');
	std::cout << "Pop s1 : " << s1.Pop() << "\n";
	return 0;
}