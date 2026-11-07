// Letters Edcba Triangle
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char x;
    int i;
    for (i = 0; i <= 4; i++) {
        for (x = 'E' - i; x >= 'A'; x--) printf("%c", x);
        printf("\n");
    }
    return 0;
}
