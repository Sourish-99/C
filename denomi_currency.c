#include <stdio.h>
int main()
{
    int money, twoth, fiveh, twoh, hunh, fift, twenth, tenth, five, two, total;

    printf("Enter the money to split to Indian currency: ");
    scanf("%d", &money);

    total = money / 2000;
    twoth = total;

    money = money - (total * 2000);
    total = money / 500;
    fiveh = total;

    money = money - (total * 500);
    total = money / 200;
    twoh = total;

    money = money - (total * 200);
    total = money / 100;
    hunh = total;

    money = money - (total * 100);
    total = money / 50;
    fift = total;

    money = money - (total * 50);
    total = money / 20;
    twenth = total;

    money = money - (total * 20);
    total = money / 10;
    tenth = total;

    money = money - (total * 10);
    total = money / 5;
    five = total;

    money = money - (total * 5);
    total = money / 2;
    two = total;

    money = money - (total * 2);
    total = money / 1;

    printf("\nThe entered money should be divided into:\n%d notes of 2000\n%d notes of 500\n%d notes of 200\n%d notes of 100\n%d notes of 50\n%d notes of 20\n%d notes of 10\n%d coins of 5\n%d coins of 2\n%d coins of 1", twoth, fiveh, twoh, hunh, fift, twenth, tenth, five, two, total);

    return 0;
}