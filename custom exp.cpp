#include <iostream>
using namespace std;

class MyException {
public:
    const char* what() const {
        return "Salary cannot be negative";
    }
};

int main() {
    int salary;

    try {
        cout << "Enter salary: ";
        cin >> salary;

        if (salary < 0)
            throw MyException();

        cout << "Salary: " << salary << endl;
    }
    catch (MyException &e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}