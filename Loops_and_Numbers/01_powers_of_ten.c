// Powers Of Ten
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i = 1;
    while (i <= 10000) {
        printf("%d\n", i);
        i = i * 10;
    }
    return 0;
}
