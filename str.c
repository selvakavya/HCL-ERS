#include <stdio.h>

int main()
{
    char str[100];
    int length = 0, i = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        length++;
        i++;
    }

    printf("Length = %d\n", length - 1);

    return 0;
}