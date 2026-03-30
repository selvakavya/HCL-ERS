#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

// 1. Distance between two coordinate pairs
double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

// 2. Distance between two Point objects
double distance(Point p1, Point p2) {
    return distance(p1.x, p1.y, p2.x, p2.y);
}

// 3. Distance from origin
double distance(Point p) {
    return sqrt(p.x * p.x + p.y * p.y);
}

int main() {
    Point p1 = {1, 2}, p2 = {4, 6};

    cout << "Distance (coords): " << distance(1, 2, 4, 6) << endl;
    cout << "Distance (points): " << distance(p1, p2) << endl;
    cout << "Distance (origin): " << distance(p1) << endl;

    return 0;
}