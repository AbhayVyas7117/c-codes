// Palindrome String
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

    int i, j = strlen(x) - 1, ok = 1;
    for (i = 0; i < j; i++, j--) {
        if (tolower(x[i]) != tolower(x[j])) {
            ok = 0;
            break;
        }
    }
    if (ok)
        printf("%s is a palindrome\n", x);
    else
        printf("%s is not a palindrome\n", x);
    return 0;
}
