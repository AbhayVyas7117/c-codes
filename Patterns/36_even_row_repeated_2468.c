// Even Row Repeated 2468
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 2; j <= 8; j += 2) printf("%d", j);
        printf("\n");
    }
    return 0;
}
