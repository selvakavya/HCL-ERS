#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int salary;

public:
    void setEmployee(string n, int s) {
        name = n;
        salary = s;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    void setManager(string n, int s, string d) {
        setEmployee(n, s);
        department = d;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;
    m.setManager("Kavya", 50000, "IT");
    m.display();

    return 0;
}