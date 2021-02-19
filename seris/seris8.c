#include <stdio.h>
#include <math.h>

int main()
{
    int i = 1, n, x, s = 0;

    printf("Enter a value to find the summation in format X^1 + X^2...N: ");
    scanf("%d", &n);

    printf("\nEnter the base value of each term: ");
    scanf("%d", &x);

    while (i <= n)
    {
        s = s + pow(x, i);
        i++;
    }

    printf("\nSummation of seris is: %d", s);

    return 0;
}