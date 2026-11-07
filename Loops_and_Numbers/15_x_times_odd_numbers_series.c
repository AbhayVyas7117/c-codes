// Sum of x*i for odd i up to n
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int x, n, i, s = 0;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i += 2)
        s += x * i;
    printf("%d\n", s);
    return 0;
}
