// Maximum Element
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, x[5], max;
    for (i = 0; i <= 4; i++) {
        printf("Enter a number @ %d: ", i);
        scanf("%d", &x[i]);
    }
    max = x[0];
    for (i = 1; i <= 4; i++)
        if (x[i] > max)
            max = x[i];
    printf("Maximum number is %d\n", max);
    return 0;
}
