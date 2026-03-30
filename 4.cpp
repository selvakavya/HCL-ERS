#include <iostream>
using namespace std;

class Demo {
private:
    const int value;

public:
    Demo(int v) : value(v) {}

    void setValue(int v) {
        int *ptr = const_cast<int*>(&value); // removing const
        *ptr = v; // ❌ undefined behavior
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Demo d(10);

    d.display();
    d.setValue(50); // illegal modification
    d.display();

    return 0;
}