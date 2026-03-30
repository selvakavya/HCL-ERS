#include <iostream>
using namespace std;

// Functions
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divi(int a, int b) { return a / b; }

int main() {
    int choice, a, b;

    // Function pointer
    int (*func)(int, int);

    do {
        cout << "\n1.Add 2.Sub 3.Mul 4.Div 5.Exit\n";
        cin >> choice;

        if (choice == 5) break;

        cout << "Enter two numbers: ";
        cin >> a >> b;

        switch (choice) {
            case 1: func = add; break;
            case 2: func = sub; break;
            case 3: func = mul; break;
            case 4: func = divi; break;
            default:
                cout << "Invalid choice\n";
                continue;
        }

        cout << "Result: " << func(a, b) << endl;

    } while (true);

    return 0;
}