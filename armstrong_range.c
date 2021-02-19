#include <stdio.h>
int main()
{
    int r, s, p, i, n;

    printf("Enter the range to print armstrong number upto: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        s = 0;
        p = i;

        while (p > 0)
        {
            r = p % 10;
            s = s + (r * r * r);
            p = p / 10;
        }

        if (s == i)
            printf("%d\n", i);
    }

    return 0;
}
