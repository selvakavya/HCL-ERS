#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, flag = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (n > 1 && flag == 0)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}