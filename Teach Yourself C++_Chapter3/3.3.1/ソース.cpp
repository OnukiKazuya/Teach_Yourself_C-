#include <iostream>

class Who {
private:
	char Id;
public:
	Who(const char a) { Id = a; std::cout << Id << "(ConstructerID)\n"; }
	~Who() { std::cout << Id << "(DestructorID)\n"; }
};

Who MakeWho(const char a) { Who who(a); return who; }

int main() {
	Who w1 = MakeWho('1');
	return 0;
}