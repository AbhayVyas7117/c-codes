// Currency Notes Count
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int amount, notes = 0, i;
    int denom[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    printf("Enter the amount: ");
    scanf("%d", &amount);
    for (i = 0; i < 9; i++) {
        notes += amount / denom[i];
        amount %= denom[i];
    }
    printf("Total number of notes/coins = %d\n", notes);
    return 0;
}
