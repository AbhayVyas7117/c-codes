// Shift Left Fill With 5
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = i; j <= 5; j++) printf(" %d", j);
        for (j = 2; j <= i; j++) printf(" 5");
        printf("\n");
    }
    return 0;
}
