#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int id;
    char name[50];
};

int main() {
    Student s[2] = {
        {1, "Kavya"},
        {2, "Rahul"}
    };

    ofstream out("students.dat", ios::binary);
    out.write((char*)s, sizeof(s));
    out.close();

    Student s2[2];

    ifstream in("students.dat", ios::binary);
    in.read((char*)s2, sizeof(s2));
    in.close();

    cout << "Read from file:\n";
    for (int i = 0; i < 2; i++) {
        cout << s2[i].id << " " << s2[i].name << endl;
    }

    return 0;
}