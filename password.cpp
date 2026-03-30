#include <iostream>
using namespace std;

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;

    if (password.length() > 8)
        cout << "Valid password (length > 8)";
    else
        cout << "Invalid password";

    return 0;
}