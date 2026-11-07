// Odd Numbers Shrinking 13579
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 9; i += 2) {
        for (j = i; j <= 9; j += 2) printf("%d", j);
        printf("\n");
    }
    return 0;
}
