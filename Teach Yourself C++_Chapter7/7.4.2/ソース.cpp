#include <iostream>

class First {
private:
	int m_firstValue;
public:
	First(int firstvalue) { m_firstValue = firstvalue; }
};

class Second {
private:
	int m_secondValue;
public:
	Second(int secondvalue) { m_secondValue = secondvalue; }
};

class Derive : public First, public Second {
private:
	int m_deriveValue;
public:
	Derive(int firstvalue, int secondvalue, int derivevalue) :First(firstvalue), Second(secondvalue) {
		m_deriveValue = derivevalue;
	}
};

int main() {
	Derive d1(1, 2, 3);
	return 0;
}