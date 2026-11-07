// Count Of Even And Odd 1 To 10
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, count_even = 0, count_odd = 0;
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) count_even++;
        else count_odd++;
    }
    printf("Count of even numbers = %d\n", count_even);
    printf("Count of odd numbers = %d\n", count_odd);
    return 0;
}
