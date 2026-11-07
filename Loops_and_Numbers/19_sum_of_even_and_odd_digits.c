// Sum Of Even And Odd Digits
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int n, r, sum_even = 0, sum_odd = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        r = n % 10;
        if (r % 2 == 0) sum_even += r;
        else sum_odd += r;
        n /= 10;
    }
    printf("Sum of even digits: %d\n", sum_even);
    printf("Sum of odd digits: %d\n", sum_odd);
    return 0;
}
