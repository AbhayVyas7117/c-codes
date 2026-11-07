// Factorial
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int n, i;
    long long p = 1;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        p *= i;
    printf("Factorial = %lld\n", p);
    return 0;
}
