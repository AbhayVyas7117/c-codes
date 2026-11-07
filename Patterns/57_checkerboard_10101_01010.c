// Checkerboard 10101 01010
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++)
            printf((i + j) % 2 == 0 ? "1" : "0");
        printf("\n");
    }
    return 0;
}
