// Linear Search
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, n, x[10], found = 0;
    for (i = 0; i <= 9; i++) {
        printf("Enter a number @ %d: ", i);
        scanf("%d", &x[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d", &n);
    for (i = 0; i <= 9; i++) {
        if (x[i] == n) {
            printf("Number found @ %d\n", i);
            found = 1;
            break;
        }
    }
    if (found == 0)
        printf("Number does not exist\n");
    return 0;
}
