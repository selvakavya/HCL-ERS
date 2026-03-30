#include <iostream>
using namespace std;

typedef struct {
    string name;
    int age;
} Person;

int main() {
    Person p;

    p.name = "Kavya";
    p.age = 20;

    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age;

    return 0;
}