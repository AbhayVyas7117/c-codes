// Swap First And Last Digit
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int n, first, last, middle, p = 1, t;
    printf("Enter a number (2 digits or more): ");
    scanf("%d", &n);
    if (n < 10) { printf("Need at least 2 digits\n"); return 0; }
    for (t = n; t >= 10; t /= 10)
        p *= 10;                 // p = 10^(digits-1)
    first = n / p;
    last = n % 10;
    middle = (n % p) / 10;
    printf("After swapping: %d\n", last * p + middle * 10 + first);
    return 0;
}
