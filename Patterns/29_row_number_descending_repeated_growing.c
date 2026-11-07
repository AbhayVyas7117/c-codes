// Row Number Descending Repeated Growing
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 5; i >= 1; i--) {
        for (j = 5; j >= i; j--) printf("%d", i);
        printf("\n");
    }
    return 0;
}
