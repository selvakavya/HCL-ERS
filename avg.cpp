#include <iostream>
using namespace std;

int main()
{
    int n;
    float sum = 0, avg;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int *ptr = arr;

    for(int i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }

    avg = sum / n;

    cout << "Average = " << avg;

    return 0;
}