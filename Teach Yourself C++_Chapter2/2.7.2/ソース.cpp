#include <iostream>

class Box {
private:
    double a, b, c;
public:
    Box(double l1, double l2, double l3);
    void ShowVolume();
};

inline Box::Box(double l1, double l2, double l3) {
    a = l1;
    b = l2;
    c = l3;
}

inline void Box::ShowVolume() {
    std::cout << a * b * c << " [cm^3] " << "\n";
}
int main() {
    Box b1(1, 2, 3);
    b1.ShowVolume();
    return 0;
}