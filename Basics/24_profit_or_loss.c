// Profit Or Loss
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int sp, cp;
    printf("Enter the cost price: ");
    scanf("%d", &cp);
    printf("Enter the selling price: ");
    scanf("%d", &sp);
    if (sp > cp)
        printf("Profit of %d\n", sp - cp);
    else if (sp < cp)
        printf("Loss of %d\n", cp - sp);
    else
        printf("No profit no loss\n");
    return 0;
}
