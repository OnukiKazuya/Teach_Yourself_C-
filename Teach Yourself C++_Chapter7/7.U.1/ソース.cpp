#include <iostream>

class Building {
private:
	int m_floor;
	int m_room;
	int m_area;
public:
	Building(int floor, int room, int area) {
		m_floor = floor;
		m_room = room;
		m_area = area;
	}
};

class House : public Building{
	int m_bedroom;
	int m_bathroom;
public:
	House(int bedroom, int bathroom, int floor, int room, int area) : Building(floor, room, area) {
		m_bedroom = bedroom;
		m_bathroom = bathroom;
	}
};

class Office : public Building {
	int m_fire;
	int m_telephone;
public:
	Office(int fire, int telephone, int floor, int room, int area) : Building(floor, room, area) {
		m_fire = fire;
		m_telephone = telephone;
	}
};

int main() {
	House h(2, 2, 2, 5, 100);
	Office o(1, 2, 2, 5, 100);

	return 0;
}