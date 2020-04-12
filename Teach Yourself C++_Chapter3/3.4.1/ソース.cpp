#include <iostream>

class Pr2;

class Pr1 {
	int Printing;
	bool InUse;
public:
	Pr1() { Printing = 0; InUse = false; }
	void set_print(int status) { Printing = status; InUse = true; }
	friend bool inuse(Pr1 p1, Pr2 p2);
};
class Pr2 {
	int Printing;
	bool InUse;
public:
	Pr2() { Printing = 0; InUse = false; }
	void set_print(int status) { Printing = status; InUse = true; }
	friend bool inuse(Pr1 p1, Pr2 p2);
};

bool inuse(Pr1 p1, Pr2 p2) { return (p1.InUse) || (p2.InUse) ? true : false; }

int main() {
	Pr1 p1;
	Pr2 p2;
	p1.set_print(3);
	if (inuse(p1, p2)) { std::cout << "You Use Printer.\n"; }
	else { std::cout << "You DON'T Use Printer.\n"; }
	return 0;
}
