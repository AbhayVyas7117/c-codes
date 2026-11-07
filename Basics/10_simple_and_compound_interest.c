// Simple And Compound Interest
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    float p, t, r, si, amount, ci;
    printf("Enter principal: ");
    scanf("%f", &p);
    printf("Enter time (years): ");
    scanf("%f", &t);
    printf("Enter rate (%%): ");
    scanf("%f", &r);
    si = (p * t * r) / 100;
    amount = p * pow(1 + r / 100, t);
    ci = amount - p;
    printf("Simple interest: %.2f\n", si);
    printf("Total amount (compound): %.2f\n", amount);
    printf("Compound interest: %.2f\n", ci);
    return 0;
}
