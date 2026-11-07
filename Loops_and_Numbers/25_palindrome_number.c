// Palindrome Number
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int n, r, temp, s = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0) {
        r = n % 10;
        s = s * 10 + r;
        n /= 10;
    }
    if (temp == s)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");
    return 0;
}
