// Sum Of Odd Numbers 1 To 10
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int s = 0, i;
    for (i = 1; i <= 10; i += 2)
        s += i;
    printf("%d\n", s);
    return 0;
}
