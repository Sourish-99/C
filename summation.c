#include <stdio.h>
int main()
{
    int n, s = 0, r;
    printf("Enter a Number to find the summation of its digits: ");
    scanf("%d", &n);

    while (n > 0)
    {
        r = n % 10;
        s = s + r;
        n = n / 10;
    }

    printf("\nSummation of digits of the given number is : %d", s);

    return 0;
}
