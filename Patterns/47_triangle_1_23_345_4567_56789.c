// Triangle 1 23 345 4567 56789
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) printf("%d", j + i - 1);
        printf("\n");
    }
    return 0;
}
