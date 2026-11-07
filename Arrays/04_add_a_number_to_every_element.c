// Add A Number To Every Element
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, x[5], n;
    for (i = 0; i <= 4; i++) {
        printf("Enter a number @ %d: ", i);
        scanf("%d", &x[i]);
    }
    printf("Enter the number to add: ");
    scanf("%d", &n);
    for (i = 0; i <= 4; i++) {
        x[i] += n;
        printf("%d\n", x[i]);
    }
    return 0;
}
