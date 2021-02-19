#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Enter the number of lines you want to print: ");
    scanf("%d", &n);

    for (i = n; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (i = 1; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}