// Maximum Of Three
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int a, b, c;
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);
    printf("Enter C: ");
    scanf("%d", &c);
    if (a >= b && a >= c)
        printf("A is the maximum number: %d\n", a);
    else if (b >= a && b >= c)
        printf("B is the maximum number: %d\n", b);
    else
        printf("C is the maximum number: %d\n", c);
    return 0;
}
