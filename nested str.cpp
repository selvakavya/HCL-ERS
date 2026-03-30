#include <iostream>
using namespace std;

struct Address {
    string city;
    string state;
};

struct Employee {
    int id;
    string name;
    Address addr;
};

int main() {
    Employee e;

    cout << "Enter ID, Name, City, State:\n";
    cin >> e.id >> e.name >> e.addr.city >> e.addr.state;

    cout << "\nEmployee Details:\n";
    cout << "ID: " << e.id << endl;
    cout << "Name: " << e.name << endl;
    cout << "City: " << e.addr.city << endl;
    cout << "State: " << e.addr.state << endl;

    return 0;
}