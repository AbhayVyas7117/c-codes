// Marks Total And Average
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int s[5], i, total = 0;
    for (i = 0; i < 5; i++) {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%d", &s[i]);
        total += s[i];
    }
    printf("Total out of 500: %d\n", total);
    printf("Average: %.2f\n", total / 5.0);
    return 0;
}
