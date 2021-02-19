#include <stdio.h>
int calc(int);
int main()
{
    int o, n;

    printf("Enter a number to print its factorial: ");
    scanf("%d", &n);

    o = calc(n);
    printf("\nThe factorial is: %d", o);

    return 1;
}

int calc(int num)
{
    int fact = 1, i;

    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    return fact;
}