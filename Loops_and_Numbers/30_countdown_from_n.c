// Countdown From N
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n >= 1) {
        printf("%d ", n);
        n--;
    }
    printf("\n");
    return 0;
}
