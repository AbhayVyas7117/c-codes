// Count Upper Lower Digit Special
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char x[100];
    printf("Enter a string: ");
    fgets(x, sizeof(x), stdin);
    x[strcspn(x, "\n")] = 0;

    int i, u = 0, l = 0, d = 0, s = 0;
    for (i = 0; x[i]; i++) {
        if (x[i] >= 'a' && x[i] <= 'z') l++;
        else if (x[i] >= 'A' && x[i] <= 'Z') u++;
        else if (x[i] >= '0' && x[i] <= '9') d++;
        else if (x[i] != ' ') s++;
    }
    printf("Upper case letters: %d\n", u);
    printf("Lower case letters: %d\n", l);
    printf("Digits: %d\n", d);
    printf("Special characters: %d\n", s);
    return 0;
}
