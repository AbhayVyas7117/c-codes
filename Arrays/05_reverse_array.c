// Reverse Array
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, x[5], y[5];
    for (i = 0; i <= 4; i++) {
        printf("Enter a number @ %d: ", i);
        scanf("%d", &x[i]);
    }
    for (i = 0; i <= 4; i++) {
        y[i] = x[4 - i];
        printf("%d\n", y[i]);
    }
    return 0;
}
