// Sliding Window 123456
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 4; i++) {
        for (j = i; j <= i + 5; j++) printf("%d", j);
        printf("\n");
    }
    return 0;
}
