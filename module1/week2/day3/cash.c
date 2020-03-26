#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;

    do
    {
        dollars = get_float("Change owed: ");
    } while (dollars <= 0);

    int coins = round(dollars * 100);

    int q = coins / 25;
    int d = (coins % 25) / 10;
    int n = ((coins % 25) % 10) / 5;
    int p = ((coins % 25) % 10) % 5;

    int s = q + d + n + p;
    printf("%i\n", s);
}