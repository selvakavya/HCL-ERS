#include <iostream>
#include <fstream>
using namespace std;

int main() {
    try {
        ifstream file("data.txt");

        if (!file)
            throw "File error: Cannot open file";

        int a, b;
        file >> a >> b;

        if (b == 0)
            throw "Math error: Division by zero";

        cout << "Result: " << a / b << endl;

        file.close();
    }
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}