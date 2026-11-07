// Decimal To Binary
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int n, r, s = 0, p = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    while (n > 0) {
        r = n % 2;
        s += p * r;
        p *= 10;
        n /= 2;
    }
    printf("Binary: %d\n", s);
    return 0;
}
