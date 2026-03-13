#include <iostream>
#include <string>
using namespace std;

int findSubstring(string text, string pattern)
{
    for(int i = 0; i <= text.length() - pattern.length(); i++)
    {
        int j;

        for(j = 0; j < pattern.length(); j++)
        {
            if(text[i + j] != pattern[j])
                break;
        }

        if(j == pattern.length())
            return i;
    }

    return -1;
}

int main()
{
    string text, pattern;

    cout << "Enter main string: ";
    getline(cin, text);

    cout << "Enter substring: ";
    getline(cin, pattern);

    int index = findSubstring(text, pattern);

    if(index != -1)
        cout << "Substring found at index " << index;
    else
        cout << "Substring not found";

    return 0;
}