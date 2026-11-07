// Grade Counts Of 10 Students
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int x[10], i, a = 0, b = 0, c = 0, d = 0;
    for (i = 0; i <= 9; i++) {
        printf("Enter percentage @ %d: ", i);
        scanf("%d", &x[i]);
    }
    for (i = 0; i <= 9; i++) {
        if (x[i] < 0 || x[i] > 100) printf("Invalid percentage %d\n", x[i]);
        else if (x[i] <= 39) d++;
        else if (x[i] <= 59) c++;
        else if (x[i] <= 79) b++;
        else a++;
    }
    printf("A grade students (80-100): %d\n", a);
    printf("B grade students (60-79): %d\n", b);
    printf("C grade students (40-59): %d\n", c);
    printf("D grade students (0-39): %d\n", d);
    return 0;
}
