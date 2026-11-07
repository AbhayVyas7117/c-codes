// Descending By Ten 90807060
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 90; i >= 60; i -= 10) {
        for (j = i; j >= i - 30; j -= 10) printf("%d", j);
        printf("\n");
    }
    return 0;
}
