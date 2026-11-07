// Number Triangle 21234 Style
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 2; j <= i; j++) printf("%d", j);
        for (j = 1; j <= n - i + 1; j++) printf("%d", j);
        printf("\n");
    }
    return 0;
}
