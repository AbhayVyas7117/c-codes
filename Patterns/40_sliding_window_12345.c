// Sliding Window 12345
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = i; j <= i + 4; j++) printf("%d", j);
        printf("\n");
    }
    return 0;
}
