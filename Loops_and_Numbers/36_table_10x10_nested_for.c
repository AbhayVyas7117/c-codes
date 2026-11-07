// Table 10X10 Nested For
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++)
            printf("%d,", i * j);
        printf("\n");
    }
    return 0;
}
