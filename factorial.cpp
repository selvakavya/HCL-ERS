#include <iostream>
using namespace std;

// Recursive
int factorialRec(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorialRec(n - 1);
}

// Iterative
int factorialIter(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Recursive: " << factorialRec(n) << endl;
    cout << "Iterative: " << factorialIter(n);

    return 0;
}