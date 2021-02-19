#include <stdio.h>
int main()
{
    int first = 0, second = 1, r, i = 1, n;

    printf("Enter the number of terms you want to print: ");
    scanf("%d", &n);

    printf("%d, ", first);
    printf("%d, ", second);

    while (i <= n - 2)
    {
        r = first + second;
        printf("%d, ", r);

        first = second;
        second = r;

        i = i + 1;
    }

    return 0;
}
