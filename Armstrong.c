#include <stdio.h>
#include <math.h>

int isArmstrong(int n)
{
    int sum = 0, temp = n, r;
    while (temp != 0)
    {
        r = temp % 10;
        sum += r * r * r;
        temp /= 10;
    }
    return sum == n;
}

int isPerfect(int n)
{
    int sum = 0, i;
    for (i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;
    return sum == n;
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("Armstrong\n");
    if (isPerfect(n))
        printf("Perfect\n");

    return 0;
}