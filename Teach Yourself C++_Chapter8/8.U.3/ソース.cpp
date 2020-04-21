#include <iostream>

class Base {
private:
	int m_i, m_j;
public:
	Base(int i, int j) : m_i(i), m_j(j) {}
	void showIJ() { std::cout << m_i << m_j << "\n"; }
};

class Derive : public Base {
private:
	int m_k;
public:
	Derive(int i, int j, int k) : Base(i, j) { m_k = k; }
	void showInfo() { showIJ();  std::cout << m_k << "\n"; }
};

int main() {
	Derive d(1, 2, 3);
	d.showInfo();

	return 0;
}

