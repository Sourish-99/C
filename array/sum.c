#include <stdio.h>
int main()
{
    int a[5], b[5], c[5], i;

    printf("Enter five numbers for first array:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter five numbers for second array:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
    }

    printf("The sum of the arrays are:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", c[i]);
    }

    return 0;
}
