// Concentric Squares 5 To 1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j, k, n;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            n = 5;
            for (k = 1; k <= 4; k++)
                if (i >= k && i <= 8 - k && j >= k && j <= 8 - k) n--;
            printf("%d", n);
        }
        printf("\n");
    }
    return 0;
}
