// Diagonal Zero Matrix
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++)
            printf(i == j ? "0" : "1");
        printf("\n");
    }
    return 0;
}
