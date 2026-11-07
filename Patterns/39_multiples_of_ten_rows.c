// Multiples Of Ten Rows
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 10; i <= 50; i += 10) {
        for (j = 1; j <= 5; j++) printf("%d,", i);
        printf("\n");
    }
    return 0;
}
