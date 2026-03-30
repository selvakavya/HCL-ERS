#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;

    void input() {
        cout << "Enter ID and Name: ";
        cin >> id >> name;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student *s = new Student[n]; // dynamic array

    for (int i = 0; i < n; i++)
        s[i].input();

    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++)
        s[i].display();

    delete[] s; // free memory

    return 0;
}