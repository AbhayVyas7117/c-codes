// Bmi Calculator
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    float height, weight, bmi;
    printf("Enter height in meter: ");
    scanf("%f", &height);
    printf("Enter weight in kilogram: ");
    scanf("%f", &weight);
    if (height <= 0 || weight <= 0) { printf("Invalid height or weight\n"); return 0; }
    bmi = weight / (height * height);
    printf("BMI = %.2f -> ", bmi);
    if (bmi < 15) printf("Very severely underweight\n");
    else if (bmi < 16) printf("Severely underweight\n");
    else if (bmi < 18.5) printf("Underweight\n");
    else if (bmi < 25) printf("Normal\n");
    else if (bmi < 30) printf("Overweight\n");
    else if (bmi < 35) printf("Obese Class I\n");
    else if (bmi < 40) printf("Obese Class II\n");
    else printf("Obese Class III\n");
    return 0;
}
