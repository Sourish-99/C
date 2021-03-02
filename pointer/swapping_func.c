#include <stdio.h>
int swap(int *, int *);
int main()
{
    int a, b;

    printf("Enter the first number:");
    scanf("%d", &a);

    printf("Enter the second number:");
    scanf("%d", &b);

    swap(&a, &b);
    printf("\nValues after swapping:\na = %d\nb = %d", a, b);

    return 0;
}

int swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}