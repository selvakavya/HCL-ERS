#include <iostream>
#include <vector>
using namespace std;

// Generic template
template<typename T>
void printDiag(T value) {
    cout << "Generic: " << value << endl;
}

// Specific overloads
void printDiag(int value) {
    cout << "Int: " << value << endl;
}

void printDiag(double value) {
    cout << "Double: " << value << endl;
}

void printDiag(string value) {
    cout << "String: " << value << endl;
}

// More specific than template
void printDiag(vector<int> v) {
    cout << "Vector: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

int main() {
    printDiag(10);
    printDiag(3.14);
    printDiag("Hello");

    vector<int> v = {1, 2, 3};
    printDiag(v);

    return 0;
}