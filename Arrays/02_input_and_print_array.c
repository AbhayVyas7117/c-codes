// Input And Print Array
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, x[5];
    for (i = 0; i <= 4; i++) {
        printf("Enter a number @ %d: ", i);
        scanf("%d", &x[i]);
    }
    for (i = 0; i <= 4; i++)
        printf("%d,", x[i]);
    printf("\n");
    return 0;
}
