// Bubble Sort
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, x[5], t, j;
    for (i = 0; i <= 4; i++) {
        printf("Enter a number @ %d: ", i);
        scanf("%d", &x[i]);
    }
    printf("Unsorted values: ");
    for (i = 0; i <= 4; i++)
        printf("%d ", x[i]);
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (x[j] > x[j + 1]) {
                t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
        }
    }
    printf("\nSorted values: ");
    for (i = 0; i <= 4; i++)
        printf("%d ", x[i]);
    printf("\n");
    return 0;
}
