// Right-pointing arrow of stars
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    return 0;
}
