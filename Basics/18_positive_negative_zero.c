// Positive Negative Zero
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a > 0)
        printf("The number is positive: %d\n", a);
    else if (a == 0)
        printf("The number is zero\n");
    else
        printf("The number is negative: %d\n", a);
    return 0;
}
