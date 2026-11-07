// Numbers I To 5
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = i; j <= 5; j++) printf("%d", j);
        printf("\n");
    }
    return 0;
}
