// Number Square Cube 1 To 5
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i;
    for (i = 1; i <= 5; i++)
        printf("%d,%d,%d\n", i, i * i, i * i * i);
    return 0;
}
