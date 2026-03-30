#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile;

    // Open file
    outFile.open("test.txt");

    if (outFile.is_open()) {
        cout << "File opened successfully for writing\n";
        outFile << "Hello, this is a test file.\n";
        outFile << "C++ File Handling Example.\n";

        outFile.close(); // explicit close
        cout << "File written and closed\n";
    } else {
        cout << "Error opening file\n";
        return 1;
    }

    // Reopen for reading
    ifstream inFile("test.txt");

    if (inFile.is_open()) {
        cout << "\nReading file content:\n";
        string line;

        while (getline(inFile, line)) {
            cout << line << endl;
        }

        inFile.close();
    } else {
        cout << "Error opening file for reading\n";
    }

    return 0;
}