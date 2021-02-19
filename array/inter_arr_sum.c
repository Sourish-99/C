#include <stdio.h>
int main()
{
    int arr[10], sum = 0, i;

    printf("Enter 10 numbers to get the sum: ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }

    printf("\nSum of the given numbers: %d", sum);

    return 0;
}