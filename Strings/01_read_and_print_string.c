// Read a string and print it
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
    printf("%s\n", x);
    return 0;
}
