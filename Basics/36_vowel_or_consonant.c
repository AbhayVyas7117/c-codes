// Vowel Or Consonant
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);
    if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')) {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
            x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
            printf("Vowel\n");
        else
            printf("Consonant\n");
    } else {
        printf("Invalid input\n");
    }
    return 0;
}
