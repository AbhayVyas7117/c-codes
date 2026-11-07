// Product Of Digits
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int n, r, p = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        r = n % 10;
        p *= r;
        n /= 10;
    }
    printf("Product of digits = %d\n", p);
    return 0;
}
