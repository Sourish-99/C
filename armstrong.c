#include <stdio.h>
int main()
{
    int n, r, s = 0, p;

    printf("Enter a number to check Armstrong or not: ");
    scanf("%d", &n);

    p = n;

    while (p > 0)
    {
        r = p % 10;
        s = s + (r * r * r);
        p = p / 10;
    }

    if (s == n)
        printf("\n%d is an Armstrong number", n);
    else
        printf("\n%d is not an Armstrong number", n);

    return 0;
}
