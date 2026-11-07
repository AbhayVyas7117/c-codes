// Count Occurrences Of A Number
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, x[5], n, found = 0;
    for (i = 0; i < 5; i++) {
        printf("Enter a number @ %d: ", i);
        scanf("%d", &x[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d", &n);
    for (i = 0; i < 5; i++)
        if (x[i] == n)
            found++;
    printf("The number is found %d times\n", found);
    return 0;
}
