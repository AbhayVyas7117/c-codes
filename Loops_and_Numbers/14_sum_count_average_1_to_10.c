// Sum Count Average 1 To 10
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    float s = 0, count = 0, i, avg;
    for (i = 1; i <= 10; i++) {
        s += i;
        count++;
    }
    avg = s / count;
    printf("Sum = %.2f\n", s);
    printf("Count = %.2f\n", count);
    printf("Average = %.2f\n", avg);
    return 0;
}
