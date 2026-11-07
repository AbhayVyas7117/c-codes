// Numbers 5 Down To I
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 5; j >= i; j--) printf("%d", j);
        printf("\n");
    }
    return 0;
}
