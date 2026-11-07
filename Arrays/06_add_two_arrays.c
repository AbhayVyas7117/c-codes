// Add Two Arrays
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int x[5], y[5], z[5], i;
    for (i = 0; i <= 4; i++) {
        printf("Enter a number for first array @ %d: ", i);
        scanf("%d", &x[i]);
    }
    for (i = 0; i <= 4; i++) {
        printf("Enter a number for second array @ %d: ", i);
        scanf("%d", &y[i]);
    }
    for (i = 0; i <= 4; i++) {
        z[i] = x[i] + y[i];
        printf("%d\n", z[i]);
    }
    return 0;
}
