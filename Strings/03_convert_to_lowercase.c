// Convert To Lowercase
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char x[100];
    printf("Enter a string: ");
    fgets(x, sizeof(x), stdin);
    x[strcspn(x, "\n")] = 0;

    int i;
    for (i = 0; x[i]; i++)
        printf("%c", (x[i] >= 'A' && x[i] <= 'Z') ? x[i] + 32 : x[i]);
    printf("\n");
    return 0;
}
