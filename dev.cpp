#include <iostream>
using namespace std;

class Device {
protected:
    string brand;

public:
    void setBrand(string b) {
        brand = b;
    }
};

class Mobile : public Device {
protected:
    int battery;

public:
    void setBattery(int b) {
        battery = b;
    }
};

class Smartphone : public Mobile {
private:
    string os;

public:
    void setSmartphone(string b, int bat, string o) {
        setBrand(b);
        setBattery(bat);
        os = o;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Battery: " << battery << endl;
        cout << "OS: " << os << endl;
    }
};

int main() {
    Smartphone s;
    s.setSmartphone("Samsung", 5000, "Android");
    s.display();

    return 0;
}