#include <stdio.h>
int main()
{
    int i, j, k, n;

    printf("Enter the number of lines you want to print: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d\t", k++);
        }

        printf("\n");
    }
    return 0;
}
