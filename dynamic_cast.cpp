#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape\n";
    }

    virtual ~Shape() {} // required for dynamic_cast
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle\n";
    }

    void radius() {
        cout << "Circle specific function\n";
    }
};

int main() {
    Shape *s = new Circle();

    // Safe downcasting
    Circle *c = dynamic_cast<Circle*>(s);

    if (c != nullptr) {
        c->radius();
    } else {
        cout << "Cast failed\n";
    }

    delete s;
    return 0;
}