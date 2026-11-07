// Alternate Columns 9 Wide
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 9; j++) printf("%d", j % 2);
        printf("\n");
    }
    return 0;
}
