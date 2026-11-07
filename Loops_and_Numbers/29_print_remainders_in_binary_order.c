// Print Remainders In Binary Order
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int n, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Binary digits (last to first): ");
    while (n > 0) {
        r = n % 2;
        printf("%d", r);
        n /= 2;
    }
    printf("\n");
    return 0;
}
