#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;

    printf("Enter a number to check palindrome or not: ");
    scanf("%d", &n);

    temp = n;

    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }

    if (temp == sum)
        printf("\n%d is a palindrome number", temp);
    else
        printf("\n%d is not palindrome number", temp);

    return 0;
}