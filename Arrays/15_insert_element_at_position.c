// Insert Element At Position
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, x[10], p, n;
    for (i = 0; i <= 8; i++) {
        printf("Enter a number @ %d: ", i);
        scanf("%d", &x[i]);
    }
    printf("Enter the value to insert: ");
    scanf("%d", &n);
    printf("Enter the position (0-9): ");
    scanf("%d", &p);
    if (p < 0 || p > 9) { printf("Invalid position\n"); return 0; }
    for (i = 8; i >= p; i--)
        x[i + 1] = x[i];
    x[p] = n;
    printf("Values after insertion: ");
    for (i = 0; i <= 9; i++)
        printf("%d ", x[i]);
    printf("\n");
    return 0;
}
