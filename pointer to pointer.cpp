#include <iostream>
using namespace std;

void modify(int **ptr) {
    **ptr = 50; // change value using double pointer
}

int main() {
    int x = 10;

    int *p = &x;
    int **pp = &p;

    modify(pp);

    cout << "Modified value: " << x << endl;

    return 0;
}