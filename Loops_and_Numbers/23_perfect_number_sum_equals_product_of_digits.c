// Perfect Number Sum Equals Product Of Digits
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int n, r, s = 0, p = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        r = n % 10;
        s += r;
        p *= r;
        n /= 10;
    }
    if (s == p)
        printf("Perfect number (sum of digits equals product of digits)\n");
    else
        printf("Not a perfect number\n");
    return 0;
}
