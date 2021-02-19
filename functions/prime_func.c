#include <stdio.h>
void check(int);
int main()
{
    int n;

    printf("Enter a number to check prime or not:");
    scanf("%d", &n);

    check(n);
    return 1;
}

void check(int num)
{
    int i, p = 0;
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            p++;
        }
    }

    if (p == 2)

        printf("%d is a prime number", num);

    else

        printf("%d is not a prime number", num);
}