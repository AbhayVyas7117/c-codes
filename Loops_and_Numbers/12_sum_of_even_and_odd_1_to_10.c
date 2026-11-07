// Sum Of Even And Odd 1 To 10
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, even = 0, odd = 0;
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) even += i;
        else odd += i;
    }
    printf("Sum of even numbers = %d\n", even);
    printf("Sum of odd numbers = %d\n", odd);
    return 0;
}
