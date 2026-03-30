#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n1.Add 2.Subtract 3.Exit\n";
        cin >> choice;

        int a, b;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Sum: " << a + b;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Difference: " << a - b;
                break;

            case 3:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice";
        }

    } while (choice != 3);

    return 0;
}