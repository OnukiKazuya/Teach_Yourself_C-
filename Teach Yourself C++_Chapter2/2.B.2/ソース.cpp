#include <iostream>

class Dict {
private:
	std::string Name;
	std::string Address;
public:
	void Store(const std::string& name, const std::string& address);
	void Display();
};

void Dict::Store(const std::string& name, const std::string& address) {
	Name = name;
	Address = address;
}
void Dict::Display() {
	std::cout << "Name: " << Name << "\n";
	std::cout << "Address: " << Address << "\n";
}

int main() {
	Dict d1;
	d1.Store("Justin Bieber", "justin.bieber@hoge.mail.com");
	d1.Display();

	return 0;
}