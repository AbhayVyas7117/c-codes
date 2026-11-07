// Reverse Number
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int n, r, s = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        r = n % 10;
        s = s * 10 + r;
        n = n / 10;
    }
    printf("Reverse = %d\n", s);
    return 0;
}
