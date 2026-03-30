#include <iostream>
#include <cassert>
using namespace std;

int main() {
    cout << "File: " << __FILE__ << endl;
    cout << "Line: " << __LINE__ << endl;

#ifdef __GNUC__
    cout << "Compiler Version: " << __VERSION__ << endl;
#else
    cout << "Compiler: Unknown" << endl;
#endif

    int x = 5;

    // Assertion with debug info
    if (x < 0) {
        cout << "Assertion failed at "
             << __FILE__ << ":" << __LINE__ << endl;
        assert(x >= 0);
    }

    cout << "Program executed successfully\n";

    return 0;
}