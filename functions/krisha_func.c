#include <stdio.h>
#include <math.h>
int GetFactorial(int number);
int main()
{
    int num, i, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (num > 0)
    {
        i = num % 10;
        sum = sum + GetFactorial(i);
        num = num / 10;
    }
    if (sum == temp)
        printf("%d is a strong number", temp);
    else
        printf("%d is not a strong number", temp);

    return 1;
}

int GetFactorial(int number)
{
    int factorial = 1, i;
    for (i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}