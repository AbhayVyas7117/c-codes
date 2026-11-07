// Days To Weeks And Years
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    float days;
    printf("Enter days: ");
    scanf("%f", &days);
    printf("Total weeks: %.2f\n", days / 7);
    printf("Total years: %.2f\n", days / 365);
    return 0;
}
