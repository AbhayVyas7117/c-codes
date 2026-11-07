// Sphere Volume And Surface Area
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    float r;
    printf("Enter the radius: ");
    scanf("%f", &r);
    printf("Volume: %f\n", (4.0 / 3.0) * 3.14 * r * r * r);
    printf("Surface area: %f\n", 4.0 * 3.14 * r * r);
    return 0;
}
