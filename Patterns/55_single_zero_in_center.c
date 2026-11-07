// Single Zero In Center
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++)
            printf((i == 3 && j == 3) ? "0" : "1");
        printf("\n");
    }
    return 0;
}
