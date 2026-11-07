// Multiples Of 7 Up To 100
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, count = 0;
    for (i = 1; i <= 100; i++) {
        if (i % 7 == 0) {
            printf("%d\n", i);
            count++;
        }
    }
    printf("Total: %d\n", count);
    return 0;
}
