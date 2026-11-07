// Days In Month
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int a;
    printf("Enter month number (1-12): ");
    scanf("%d", &a);
    if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12)
        printf("31 days\n");
    else if (a == 2)
        printf("28 days (29 in a leap year)\n");
    else if (a == 4 || a == 6 || a == 9 || a == 11)
        printf("30 days\n");
    else
        printf("Invalid\n");
    return 0;
}
