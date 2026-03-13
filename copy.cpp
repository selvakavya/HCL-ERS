#include <iostream>
#include <cstring>
using namespace std;

void safeCopy(char *dest, const char *src, int size)
{
    int i;

    for(i = 0; i < size - 1 && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    dest[i] = '\0';
}

int main()
{
    char src[] = "HelloWorld";
    char dest[6];

    safeCopy(dest, src, sizeof(dest));

    cout << "Copied string: " << dest;

    return 0;
}