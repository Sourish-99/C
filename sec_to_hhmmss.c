#include <stdio.h>
int main()
{
    int sec, h, m, s;
    printf("Enter the second: ");
    scanf("%d", &sec);

    h = sec / 3600;
    m = (sec - (3600 * h)) / 60;
    s = (sec - (3600 * h) - (m * 60));

    printf("%d hours\n%d minutes\n%d second\n", h, m, s);
    return 0;
}