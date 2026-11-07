// Sum And Count Divisible By 7 101 To 199
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, sum = 0, count = 0;
    for (i = 101; i < 200; i++) {
        if (i % 7 == 0) {
            printf("%d\n", i);
            sum += i;
            count++;
        }
    }
    printf("Count = %d\n", count);
    printf("Sum = %d\n", sum);
    return 0;
}
