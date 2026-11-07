// Merge Two Arrays
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int x[5], y[3], z[8], i;
    for (i = 0; i <= 4; i++) {
        printf("First array, enter a number @ %d: ", i);
        scanf("%d", &x[i]);
    }
    for (i = 0; i <= 2; i++) {
        printf("Second array, enter a number @ %d: ", i);
        scanf("%d", &y[i]);
    }
    for (i = 0; i <= 4; i++)
        z[i] = x[i];
    for (i = 0; i <= 2; i++)
        z[i + 5] = y[i];
    for (i = 0; i <= 7; i++)
        printf("%d ", z[i]);
    printf("\n");
    return 0;
}
