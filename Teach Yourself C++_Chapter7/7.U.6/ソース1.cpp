#include <iostream>

class Vehicle {
private:
	int m_wheels;
	int m_range;
public:
	Vehicle(int wheels, int range) { m_wheels = wheels; m_range = range; }
	void showInfo() {
		std::cout << "Wheels: " << m_wheels << "\n";
		std::cout << "Range: " << m_range << "\n";
	}
};

enum MotorType { Gas, Electricity, Diesel };

class MotorCar : public virtual Vehicle {
private:
	enum MotorType m_motorType;
public:
	MotorCar(enum MotorType motorType, int wheels, int range) : Vehicle(wheels, range) {
		m_motorType = motorType;
	}
	void showMotorInfo() {
		std::cout << "ENgine: ";
		switch (m_motorType) {
		case Gas:
			std::cout << "Normal\n";
			break;
		case Electricity:
			std::cout << "Electricity\n";
			break;
		case Diesel:
			std::cout << "Diesel\n";
			break;
		}
	}
};

class RoadUse : public virtual Vehicle {
private:
	int m_passengers;
public:
	RoadUse(int passengers, int wheels, int range) : Vehicle(wheels, range) {
		m_passengers = passengers;
	}
	void showRoadInfo() { std::cout << "Passenger Num: "<< m_passengers << "\n"; }
};

enum SteeringInfo {Power, RackPinion, Manual};

class Car : public MotorCar, public RoadUse {
private:
	enum SteeringInfo m_steeringInfo;
public:
	Car(enum SteeringInfo steeringInfo, enum MotorType motorType, 
		int passengers, int wheels, int range) : MotorCar(motorType, wheels, range), RoadUse(passengers, wheels, range), Vehicle(wheels, range){
		m_steeringInfo = steeringInfo;
	}
	void showCarInfo() {
		showInfo();
		showMotorInfo();
		showRoadInfo();
		
		std::cout << "Handle: ";
		switch (m_steeringInfo) {
		case Power:
			std::cout << "Power\n";
			break;
		case RackPinion:
			std::cout << "Rack And Pinion\n";
			break;
		case Manual:
			std::cout << "Manual\n";
			break;
		}
	}
};

int main() {
	Car c(SteeringInfo::Power, MotorType::Gas, 500, 4, 6);
	c.showCarInfo();

	return 0;
}