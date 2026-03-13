#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, j = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to remove: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ch)
            str[j++] = str[i];
    }

    str[j] = '\0';

    printf("Modified string: %s", str);

    return 0;
}