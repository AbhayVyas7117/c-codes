// Count Digits
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int count = 0, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        n /= 10;
        count++;
    }
    printf("Number of digits: %d\n", count);
    return 0;
}
