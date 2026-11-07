// Copy Even Elements To New Array
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int x[10], y[10], i, j = 0;
    for (i = 0; i <= 9; i++) {
        printf("Enter a number @ %d: ", i);
        scanf("%d", &x[i]);
    }
    for (i = 0; i <= 9; i++) {
        if (x[i] % 2 == 0) {
            y[j] = x[i];
            j++;
        }
    }
    for (i = 0; i < j; i++)
        printf("%d,", y[i]);
    printf("\n");
    return 0;
}
