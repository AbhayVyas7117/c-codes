// Gross Salary Hra Da
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    float s, hra, da, gross;
    printf("Enter the basic salary: ");
    scanf("%f", &s);
    if (s >= 30000) { hra = s * 0.30; da = s * 0.95; }
    else if (s >= 20000) { hra = s * 0.25; da = s * 0.90; }
    else if (s >= 10000) { hra = s * 0.20; da = s * 0.80; }
    else { printf("Invalid (basic salary below 10000)\n"); return 0; }
    gross = s + hra + da;
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross salary: %.2f\n", gross);
    printf("Net annual gross salary: %.2f\n", gross * 12);
    return 0;
}
