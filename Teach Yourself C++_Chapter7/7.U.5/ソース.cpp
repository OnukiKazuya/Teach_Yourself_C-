#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

class Planet {
protected:
	double m_distance;
	int m_revolve;
public:
	Planet(double distance, int revolve) { m_distance = distance; m_revolve = revolve; }
};

class Earth : public Planet {
private:
	double m_circumference;
public:
	Earth(double distance, double revolve) : Planet(distance, revolve) {
		m_circumference = 2 * m_revolve * M_PI;
	}
	void showInfo() { std::cout << m_distance << m_revolve << m_circumference << "\n"; }
};

int main() {
	Earth e(1000000000, 100);
	e.showInfo();
	
	return 0;
}