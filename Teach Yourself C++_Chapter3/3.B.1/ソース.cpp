#include <iostream>

class Planet {
	int Moons;
	double DistFromSun;
	double Diameter;
	double Mass;
};

class Mars :public Planet {
	Mars();
	~Mars()
};