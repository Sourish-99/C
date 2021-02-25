#include <stdio.h>
int main()
{
    int i, j, a[3][3], b[3][3], c[3][3];

    printf("Enter the values of the elements of the 'A' matrix : \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the values of the elements of the 'B' matrix : \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("The result of the multiplication of the two matrices 'A' and 'B' is : \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = c[i][j] + a[i][j] * b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}