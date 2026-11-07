// Count Characters
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

    int i, count = 0;
    for (i = 0; x[i]; i++) {
        printf("%c", x[i]);
        count++;
    }
    printf("\nTotal number of characters is %d\n", count);
    return 0;
}
