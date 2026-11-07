// Capitalize First Letter Of Each Word
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

    int i, newword = 1;
    for (i = 0; x[i]; i++) {
        if (x[i] == ' ') {
            newword = 1;
        } else if (newword) {
            if (x[i] >= 'a' && x[i] <= 'z') x[i] -= 32;
            newword = 0;
        } else if (x[i] >= 'A' && x[i] <= 'Z') {
            x[i] += 32;
        }
    }
    printf("%s\n", x);
    return 0;
}
