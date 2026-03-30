#include <iostream>
#include <fstream>
using namespace std;

class Employee {
public:
    int id;
    char name[50];
    float salary;

    void input() {
        cout << "Enter ID, Name, Salary: ";
        cin >> id >> name >> salary;
    }

    void display() {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee e;

    // Write to binary file
    ofstream outFile("emp.dat", ios::binary);

    if (!outFile) {
        cout << "Error opening file for writing\n";
        return 1;
    }

    e.input();
    outFile.write((char*)&e, sizeof(e));
    outFile.close();

    // Read from binary file
    ifstream inFile("emp.dat", ios::binary);

    if (!inFile) {
        cout << "Error opening file for reading\n";
        return 1;
    }

    Employee e2;
    inFile.read((char*)&e2, sizeof(e2));

    cout << "\nEmployee Details from File:\n";
    e2.display();

    inFile.close();

    return 0;
}