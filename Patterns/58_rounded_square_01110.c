// Rounded Square 01110
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            int corner = (i == 1 || i == 5) && (j == 1 || j == 5);
            int inner = (i >= 2 && i <= 4) && (j >= 2 && j <= 4);
            printf((corner || inner) ? "0" : "1");
        }
        printf("\n");
    }
    return 0;
}
