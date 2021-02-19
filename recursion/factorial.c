#include <stdio.h>
int fact(int);
int main()
{
    int num;

    printf("Enter a positive number to get its factorial: ");
    scanf("%d", &num);

    if (num < 0)
        printf("%d is not a positive number", num);
    else
        printf("Factorial of %d is %d", num, fact(num));

    return 0;
}

int fact(int n)
{
    if (n >= 1)
        return n * fact(n - 1);
    else
        return 1;
}