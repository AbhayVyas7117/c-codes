// Triangle 56789 4567 345 23 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) printf("%d", j + i - 1);
        printf("\n");
    }
    return 0;
}
