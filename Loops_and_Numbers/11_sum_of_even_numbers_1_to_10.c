// Sum Of Even Numbers 1 To 10
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int s = 0, i;
    for (i = 2; i <= 10; i += 2)
        s += i;
    printf("Sum of even numbers = %d\n", s);
    return 0;
}
