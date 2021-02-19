#include <stdio.h>
int main()
{
    int n, r, sum = 0;
    printf("Enter a number to reverse it: ");
    scanf("%d", &n);

    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }

    printf("\nThe reverse of the given number is %d", sum);
    return 0;
}