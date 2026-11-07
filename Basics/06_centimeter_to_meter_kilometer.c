// Centimeter To Meter Kilometer
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    float cm;
    printf("Enter the length in centimeter: ");
    scanf("%f", &cm);
    printf("Length in meter: %f\n", cm / 100);
    printf("Length in kilometer: %f\n", cm / 100000);
    return 0;
}
