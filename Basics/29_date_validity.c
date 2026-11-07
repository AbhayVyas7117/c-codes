// Date Validity
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int d, m, y;
    printf("Enter Date: ");
    scanf("%d", &d);
    printf("Enter Month: ");
    scanf("%d", &m);
    printf("Enter Year: ");
    scanf("%d", &y);
    if (y <= 0) { printf("Year is not valid\n"); return 0; }
    if (m < 1 || m > 12) { printf("Month is not valid\n"); return 0; }
    int max;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) max = 31;
    else if (m == 4 || m == 6 || m == 9 || m == 11) max = 30;
    else if ((y % 100 != 0 && y % 4 == 0) || y % 400 == 0) max = 29;
    else max = 28;
    if (d >= 1 && d <= max) printf("Date is valid\n");
    else printf("Date is not valid\n");
    return 0;
}
