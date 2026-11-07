// Is Prime Number
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i = 2, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 2) { printf("Not a prime number\n"); return 0; }
    while (i < n) {
        if (n % i == 0)
            break;
        i++;
    }
    if (n == i)
        printf("Prime number\n");
    else
        printf("Not a prime number\n");
    return 0;
}
