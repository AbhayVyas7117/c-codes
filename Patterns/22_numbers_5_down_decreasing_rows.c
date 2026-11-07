// Numbers 5 Down Decreasing Rows
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 5; i >= 1; i--) {
        for (j = i; j >= 1; j--) printf("%d", j);
        printf("\n");
    }
    return 0;
}
