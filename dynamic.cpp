#include <iostream>
using namespace std;

int main() {
    int capacity = 2;
    int size = 0;

    int *arr = new int[capacity];

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (size == capacity) {
            capacity *= 2;

            int *newArr = new int[capacity];

            for (int j = 0; j < size; j++)
                newArr[j] = arr[j];

            delete[] arr;
            arr = newArr;
        }

        cin >> arr[size++];
    }

    cout << "Elements:\n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    delete[] arr;

    return 0;
}