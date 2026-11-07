// Circle Area Diameter Circumference
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    printf("Area: %f\n", 3.14 * r * r);
    printf("Diameter: %f\n", 2 * r);
    printf("Circumference: %f\n", 2 * 3.14 * r);
    return 0;
}
