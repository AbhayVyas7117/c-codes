// Count Vowels And Consonants
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

    int i, vowels = 0, consonants = 0;
    for (i = 0; x[i]; i++) {
        char c = tolower(x[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vowels++;
        else if (c >= 'a' && c <= 'z')
            consonants++;
    }
    printf("Number of vowels is %d\n", vowels);
    printf("Number of consonants is %d\n", consonants);
    return 0;
}
