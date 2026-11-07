// Rectangle Area
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int l, b;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &b);
    printf("The area of the rectangle is: %d\n", l * b);
    return 0;
}
