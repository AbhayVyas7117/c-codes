// Alternate Hash At
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 6; i++) {
        for (j = 1; j <= 9; j++) {
            printf(j % 2 == 0 ? "@" : "#");
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
