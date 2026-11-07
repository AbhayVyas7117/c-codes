// Case-insensitive string compare
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char x[50];
    int i;
    printf("Enter your name: ");
    fgets(x, sizeof(x), stdin);
    x[strcspn(x, "\n")] = 0;
    for (i = 0; x[i]; i++)
        x[i] = toupper(x[i]);
    if (strcmp(x, "AMIT") == 0)
        printf("Nice to meet you %s\n", x);
    else
        printf("Have a nice day %s\n", x);
    return 0;
}
