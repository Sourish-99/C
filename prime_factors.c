#include <stdio.h>
int main()
{
    int num, i, j, p;

    printf("Enter a number to print its prime factors: ");
    scanf("%d", &num);

    printf("Prime factors of %d are:\n", num);

    for (i = 1; i <= num; i++)
    {
        p = 0;
        if (num % i == 0)
        {
            for (j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    p++;
                }
            }

            if (p == 2)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}