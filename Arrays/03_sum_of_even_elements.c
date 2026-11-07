// Sum Of Even Elements
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, x[5], sum = 0;
    for (i = 0; i <= 4; i++) {
        printf("Enter a number @ %d: ", i);
        scanf("%d", &x[i]);
    }
    for (i = 0; i <= 4; i++) {
        if (x[i] % 2 == 0) {
            sum += x[i];
            printf("%d\n", x[i]);
        }
    }
    printf("Total sum of even numbers: %d\n", sum);
    return 0;
}
