// Series 10 20 40 70 110 160
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int s = 10, d = 10;
    while (s <= 160) {
        printf("%d\n", s);
        s += d;
        d += 10;
    }
    return 0;
}
