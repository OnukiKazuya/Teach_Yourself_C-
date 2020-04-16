#include <iostream>

class Base {
private:
public:
	int m_value;
};

class Derive : virtual public Base {
private:
public:
	int m_value2;
};

class Derive2 : virtual public Base {
private:
public:
	int m_value3;
};

class Derive3 : public Derive, public Derive2 {
private:
public:
	int calcProduct() { return m_value * m_value2 * m_value3; }
};

int main() {
	Derive3 ob;
	
	ob.m_value = 0;
	ob.m_value2 = 1;
	ob.m_value3 = 2;

	std::cout << "Product : " << ob.calcProduct() << "\n";
	
	return 0;
}