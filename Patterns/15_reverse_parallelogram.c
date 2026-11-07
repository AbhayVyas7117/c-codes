// Reverse Parallelogram
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) printf(" ");
        for (j = 1; j <= 5; j++) printf("*");
        printf("\n");
    }
    return 0;
}
