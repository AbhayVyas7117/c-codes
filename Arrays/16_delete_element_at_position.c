// Delete Element At Position
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, x[9], p;
    for (i = 0; i <= 8; i++) {
        printf("Enter a number @ %d: ", i);
        scanf("%d", &x[i]);
    }
    printf("Enter the position to delete (0-8): ");
    scanf("%d", &p);
    if (p < 0 || p > 8) { printf("Invalid position\n"); return 0; }
    for (i = p; i < 8; i++)
        x[i] = x[i + 1];
    printf("Values after deletion: ");
    for (i = 0; i < 8; i++)
        printf("%d ", x[i]);
    printf("\n");
    return 0;
}
