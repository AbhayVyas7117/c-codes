// Even Or Odd
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("%d is Even\n", a);
    else
        printf("%d is Odd\n", a);
    return 0;
}
