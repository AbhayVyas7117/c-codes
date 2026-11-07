// Series 1 3 7 13 21 31
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int s = 1, d = 2;
    while (s <= 31) {
        printf("%d\n", s);
        s += d;
        d += 2;
    }
    return 0;
}
