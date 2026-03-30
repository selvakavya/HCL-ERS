#include <iostream>
using namespace std;

int main() {
    const char* arr[] = {"Apple", "Banana", "Cherry"};

    for (int i = 0; i < 3; i++) {
        cout << *(arr + i) << endl; // pointer dereferencing
    }

    return 0;
}