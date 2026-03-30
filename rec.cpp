#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    void setWidth(int w) {
        if (w > 0)
            width = w;
        else {
            cout << "Invalid width! Clamping to 1\n";
            width = 1;
        }
    }

    void setHeight(int h) {
        if (h > 0)
            height = h;
        else {
            cout << "Invalid height! Clamping to 1\n";
            height = 1;
        }
    }

    int area() {
        return width * height;
    }

    void display() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    Rectangle r;

    r.setWidth(5);
    r.setHeight(-3); // invalid attempt

    r.display();
    cout << "Area: " << r.area();

    return 0;
}