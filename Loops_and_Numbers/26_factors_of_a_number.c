// Factors Of A Number
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        if (n % i == 0)
            printf("%d\n", i);
    return 0;
}
