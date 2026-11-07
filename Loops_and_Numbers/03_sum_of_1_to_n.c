// Sum Of 1 To N
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int n, i, s = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        s += i;
    printf("Sum = %d\n", s);
    return 0;
}
