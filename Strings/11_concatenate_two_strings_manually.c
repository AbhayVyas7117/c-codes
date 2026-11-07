// Concatenate Two Strings Manually
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char x[50], y[50], z[101];
    int i, j;
    printf("Enter first string: ");
    fgets(x, sizeof(x), stdin);
    x[strcspn(x, "\n")] = 0;
    printf("Enter second string: ");
    fgets(y, sizeof(y), stdin);
    y[strcspn(y, "\n")] = 0;
    for (i = 0; x[i]; i++)
        z[i] = x[i];
    z[i] = ' ';
    i++;
    for (j = 0; y[j]; j++) {
        z[i] = y[j];
        i++;
    }
    z[i] = 0;
    printf("%s\n", z);
    return 0;
}
