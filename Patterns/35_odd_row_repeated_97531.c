// Odd Row Repeated 97531
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 9; j >= 1; j -= 2) printf("%d", j);
        printf("\n");
    }
    return 0;
}
