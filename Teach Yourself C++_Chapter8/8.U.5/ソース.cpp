#include <iostream>

class Airship {
private:
	int m_passenger;
	int m_loadLimit;
public:
	Airship(int passenger, int loadLimit) :
		m_passenger(passenger), m_loadLimit(loadLimit) {}
	void showBaseInfo(){ 
		std::cout << "Passenger: " << m_passenger << "\n";
		std::cout << "LoadLimit: " << m_loadLimit << "\n";
	}
};

class Airplane : public Airship {
private:
	int m_distance;
public:
	enum Type { Propella, Jet };
	Airplane(int passenger, int loadLimit, int distance) :
		Airship(passenger, loadLimit) { m_distance = distance; }
	void showType(Type type) {
		switch (type) {
		case Type::Propella:
			std::cout << "Propella!\n";
			break;
		case Type::Jet:
			std::cout << "Jet!\n";
			break;
		}
	}
};

class Balloon : public Airship {
private:
	int m_maxHeight;
public:
	enum Type { H2, He };
	Balloon(int passenger, int loadLimit, int maxHeight) :
		Airship(passenger, loadLimit) { m_maxHeight = maxHeight; }
	void showType(Type type) {
		switch (type) {
		case Type::H2:
			std::cout << "H2\n";
			break;
		case Type::He:
			std::cout << "He\n";
			break;
		}
	}
};

int main() {
	Airplane a(100, 10000, 20);
	a.showType(Airplane::Type::Propella);
	a.showBaseInfo();

	Balloon b(100, 100000, 1000);
	b.showType(Balloon::Type::H2);
	b.showBaseInfo();

	return 0;
}