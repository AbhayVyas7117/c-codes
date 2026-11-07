// First And Last Digit
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int first, last, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    while (n >= 10)
        n /= 10;
    first = n;
    printf("Last digit: %d\n", last);
    printf("First digit: %d\n", first);
    return 0;
}
