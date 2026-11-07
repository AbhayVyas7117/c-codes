// Swap Two Numbers
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
    // swap using a third variable
    c = a;
    a = b;
    b = c;
    printf("After swapping A = %d, B = %d\n", a, b);
    // swap back without a third variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swapped back A = %d, B = %d\n", a, b);
    return 0;
}
