// Grid Numbers 1 To 25
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j, n = 1;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) printf(" %d", n++);
        printf("\n");
    }
    return 0;
}
