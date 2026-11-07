// Electricity Bill
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    float unit, bill;
    printf("Enter total consumed units: ");
    scanf("%f", &unit);
    if (unit < 0) printf("Invalid units\n");
    else if (unit <= 200) { bill = unit * 0.50; printf("Bill: %.2f\n", bill); }
    else if (unit <= 400) { bill = 100 + (unit - 200) * 0.65; printf("Bill: %.2f\n", bill); }
    else if (unit <= 600) { bill = 230 + (unit - 400) * 0.80; printf("Bill: %.2f\n", bill); }
    else printf("Units are out of the slab range (0-600)\n");
    return 0;
}
