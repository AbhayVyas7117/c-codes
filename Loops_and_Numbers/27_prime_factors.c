// Prime Factors
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int n, i = 2;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 1) {
        if (n % i == 0) {
            printf("%d\n", i);
            n /= i;
        } else {
            i++;
        }
    }
    return 0;
}
