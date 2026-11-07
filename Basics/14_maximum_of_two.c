// Maximum Of Two
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int a, b;
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);
    if (a > b)
        printf("The maximum number is A: %d\n", a);
    else
        printf("The maximum number is B: %d\n", b);
    return 0;
}
