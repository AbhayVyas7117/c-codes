// Armstrong Number
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int n, r, p = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0) {
        r = n % 10;
        p += r * r * r;
        n /= 10;
    }
    if (temp == p)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");
    return 0;
}
