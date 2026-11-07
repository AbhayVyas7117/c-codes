// Fahrenheit To Celsius
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (5.0 / 9.0) * (f - 32);
    printf("Temperature in Celsius: %.2f\n", c);
    return 0;
}
