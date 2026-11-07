// Salary from hours worked (Rs 1500 for 8 hours)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    float wh, sal;
    printf("Enter the number of hours worked: ");
    scanf("%f", &wh);
    sal = (1500.0 / 8.0) * wh;
    printf("The total payment is: %.2f\n", sal);
    return 0;
}
