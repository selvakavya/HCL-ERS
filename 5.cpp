#include <iostream>
using namespace std;

enum Role { USER, ADMIN, GUEST };

struct Permissions {
    unsigned int read : 1;
    unsigned int write : 1;
    unsigned int execute : 1;
};

int main() {
    Role r = ADMIN;

    Permissions p = {1, 1, 0};

    cout << "Role: " << r << endl;
    cout << "Read: " << p.read << endl;
    cout << "Write: " << p.write << endl;
    cout << "Execute: " << p.execute << endl;

    return 0;
}