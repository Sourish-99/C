#include <stdio.h>
int main()
{
    int i, j, x, k = 0, sum = 1, num, n;
    printf("Enter a Number to check Krishnamurthy or not:");
    scanf("%d", &n);

    num = n;
    while (num > 0)
    {
        x = num % 10;
        sum = 1;

        for (i = x; i >= 1; i--)
        {
            sum = sum * i;
        }

        k = k + sum;
        num = num / 10;
    }

    if (n == k)
        printf("%d is a Krishnamurthy Number", n);
    else
        printf("%d is not a Krishnamurthy Number ", n);

    return 0;
}

/*
1! = 1
4! = 4 × 3 × 2 × 1 = 24
5! = 5 × 4 × 3 × 2 × 1 = 120
1 + 24 + 120 = 145
*/