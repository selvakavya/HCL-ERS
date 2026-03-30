#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    // Prefix (++c)
    Counter& operator++() {
        ++count;
        return *this;
    }

    // Postfix (c++)
    Counter operator++(int) {
        Counter temp = *this;
        count++;
        return temp;
    }

    int get() {
        return count;
    }
};

int main() {
    Counter c;

    int x = c++; // postfix
    cout << "x (c++): " << x << ", c: " << c.get() << endl;

    int y = ++c; // prefix
    cout << "y (++c): " << y << ", c: " << c.get() << endl;

    return 0;
}