#include <iostream>
using namespace std;

class Seconds;

class Meters {
public:
    double value;
    explicit Meters(double v) : value(v) {}
};

class Seconds {
public:
    double value;
    explicit Seconds(double v) : value(v) {}
};

class MetersPerSecond {
public:
    double value;
    MetersPerSecond(double v) : value(v) {}
};

// Operator overload: Meters / Seconds
MetersPerSecond operator/(const Meters &m, const Seconds &s) {
    return MetersPerSecond(m.value / s.value);
}

int main() {
    Meters m(100);
    Seconds s(10);

    MetersPerSecond speed = m / s;

    cout << "Speed: " << speed.value << " m/s" << endl;

    return 0;
}