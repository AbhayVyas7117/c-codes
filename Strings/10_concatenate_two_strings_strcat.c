// Concatenate Two Strings Strcat
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char x[100], y[100];
    printf("Enter string one: ");
    fgets(x, sizeof(x), stdin);
    x[strcspn(x, "\n")] = 0;
    printf("Enter string two: ");
    fgets(y, sizeof(y), stdin);
    y[strcspn(y, "\n")] = 0;
    strcat(x, " ");
    strcat(x, y);
    printf("%s\n", x);
    return 0;
}
