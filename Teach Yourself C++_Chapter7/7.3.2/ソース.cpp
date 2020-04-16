#include <iostream>

class Vehicle {
private:
	int m_wheels;
	int m_distance;
public:
	Vehicle(const int wheels, const int distance) :m_wheels(wheels), m_distance(distance) {}
	void showInfo() const {
		std::cout << "wheels: " << m_wheels << "\n";
		std::cout << "distance: " << m_distance << "\n";
	}
};

class Car : public Vehicle {
private:
	int m_passengers;
public:
	Car(const int wheels, const int distance, const int passengers) : Vehicle(wheels, distance) {
		m_passengers = passengers;
	}
	void showCarInfo() const{
		showInfo();
		std::cout << "Passenger: " << m_passengers << "\n";
	}
};

class Truck : public Vehicle {
private:
	int m_loadlimit;
public:
	Truck(const int wheels, const int distance, const int loadlimit) : Vehicle(wheels, distance) {
		m_loadlimit = loadlimit;
	}
	void showTruckInfo() const {
		showInfo();
		std::cout << "Load Limit: " << m_loadlimit << "\n";
	}
};

int main() {
	static const int CarWheels = 4;
	static const int TruckWheels = 8;
	static const int CarPassenger = 4;
	static const int TruckLoadlimit = 100;
	int d;
	
	std::cout << "Type Distance: ";
	std::cin >> d;
	
	Car c(CarWheels, d, CarPassenger);
	Truck t(TruckWheels, d, TruckLoadlimit);
	
	c.showCarInfo();
	t.showTruckInfo();
	
	return 0;
}