// Lowercase To Uppercase Char
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);
    if (x >= 'a' && x <= 'z')
        printf("Converted %c into upper case %c\n", x, x - 32);
    else
        printf("%c\n", x);
    return 0;
}
