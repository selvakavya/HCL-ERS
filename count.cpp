#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("test.txt", ios::in);

    if (!file.is_open()) {
        cout << "Error opening file\n";
        return 1;
    }

    int count = 0;
    string line;

    while (getline(file, line)) {
        count++;
    }

    file.close();

    // Reopen in append mode
    file.open("test.txt", ios::app);

    if (file.is_open()) {
        file << "Total Lines: " << count << endl;
        file.close();
        cout << "Line count appended\n";
    }

    return 0;
}