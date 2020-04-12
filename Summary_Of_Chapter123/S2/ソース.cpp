#include <iostream>
#include <cstring>

class strtype {
	std::string p;
	int len;
public:
	strtype(std::string ptr);
	void show();
	friend std::string get_string(strtype* Cp);
};
strtype::strtype(std::string ptr) {
	p = ptr;
}

void strtype::show() {
	std::cout << p << " - len: " << len;
	std::cout << "\n";
}

 std::string get_string(strtype* Cp) { return Cp->p; }

int main() {
	strtype s1("aaaaaaaa");
	auto a = get_string(&s1);
	std::cout << a<< "\n";
	
	return 0;
}
