// Leap Year
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("This is a leap year\n");
    else
        printf("This is not a leap year\n");
    return 0;
}
