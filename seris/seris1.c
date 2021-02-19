#include <stdio.h>

int main()
{
    int i = 1, n, s = 0;

    printf("Enter a value to find the summation in format 1 + 2...N: ");
    scanf("%d", &n);

    while (i <= n)
    {
        s = s + i;
        i++;
    }

    printf("\nSummation of the series upto %d is: %d", n, s);

    return 0;
}