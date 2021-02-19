#include <stdio.h>
#include <math.h>

int main()
{
    int i = 1, n, s = 0;

    printf("Enter a value to find the summation in format 1^11 + 2^12...N: ");
    scanf("%d", &n);

    while (i <= n)
    {
        s = s + pow(i, i + 10);
        i++;
    }

    printf("\nSummation of seris is: %d", s);

    return 0;
}