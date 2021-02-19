#include <stdio.h>
int main()
{
    int arr[500], i, n, min, max;

    printf("Enter the total size of the array upto 500: ");
    scanf("%d", &n);

    printf("Enter %d numbers to find maximum and minimum : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = max = arr[0];

    for (i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }

        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Minimum of array is : %d", min);
    printf("\nMaximum of array is : %d", max);

    return 0;
}
