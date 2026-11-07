// Character Type And Ascii
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);
    if (x >= 'A' && x <= 'Z') printf("Upper case, ASCII %d\n", x);
    else if (x >= 'a' && x <= 'z') printf("Lower case, ASCII %d\n", x);
    else if (x >= '0' && x <= '9') printf("Digit, ASCII %d\n", x);
    else if (x == ' ') printf("Space, ASCII %d\n", x);
    else printf("Special character, ASCII %d\n", x);
    return 0;
}
