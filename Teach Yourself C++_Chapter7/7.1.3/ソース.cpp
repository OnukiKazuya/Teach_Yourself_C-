#include <iostream>

class BaseClass {
private:
	int m_xvalue;
public:
	void setX(int xvalue) { m_xvalue = xvalue; }
	int getX() { return m_xvalue; }
};

class DeriveClass : private BaseClass {
private:
	int m_yvalue;
public:
	void setXY(int xvalue, int yvalue) { setX(xvalue);  m_yvalue = yvalue; }
	void getXY() { std::cout << getX() << " " << m_yvalue; }
};

int main() {
	DeriveClass d;
	d.setXY(2, 3);
	d.getXY();
	
	return 0;
}