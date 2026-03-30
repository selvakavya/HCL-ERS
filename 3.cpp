#include <iostream>
using namespace std;

int main() {
    int address = 1000;

    int *ptr = reinterpret_cast<int*>(address);

    cout << "Pointer value: " << ptr << endl;

    // cout << *ptr; ❌ may crash (invalid memory access)

    return 0;
}