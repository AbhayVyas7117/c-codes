// Right Aligned Inverted Hollow Triangle
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j, n = 5;
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) printf(" ");
        for (j = 1; j <= i; j++)
            printf((j == 1 || j == i || i == n) ? "*" : " ");
        printf("\n");
    }
    return 0;
}
