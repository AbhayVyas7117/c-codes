// Prime Numbers Below 100
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, n = 2;
    while (n < 100) {
        i = 2;
        while (i < n) {
            if (n % i == 0)
                break;
            i++;
        }
        if (n == i)
            printf("%d\n", n);
        n++;
    }
    return 0;
}
