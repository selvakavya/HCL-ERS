#include <iostream>
using namespace std;

int main() {
    char str[100];
    int len = 0;

    cout << "Enter string: ";
    cin >> str;

    // find length
    while (str[len] != '\0')
        len++;

    bool isPalindrome = true;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}