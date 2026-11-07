// Odd Numbers Triangle 1 To 9
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 9; i += 2) {
        for (j = 1; j <= i; j++) printf("%d", j);
        printf("\n");
    }
    return 0;
}
