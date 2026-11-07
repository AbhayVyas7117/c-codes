// Menu Calculator
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int ch, a, b;
    do {
        printf("MENU\n1:Addition\n2:Subtraction\n3:Multiply\n4:Division\n5:Exit\nChoice: ");
        scanf("%d", &ch);
        if (ch >= 1 && ch <= 4) {
            printf("Enter first number: ");
            scanf("%d", &a);
            printf("Enter second number: ");
            scanf("%d", &b);
        }
        switch (ch) {
        case 1: printf("Addition of %d and %d is %d\n", a, b, a + b); break;
        case 2: printf("Subtraction of %d and %d is %d\n", a, b, a - b); break;
        case 3: printf("Multiplication of %d and %d is %d\n", a, b, a * b); break;
        case 4:
            if (b != 0) printf("%d divided by %d is %d\n", a, b, a / b);
            else printf("Division by zero is not allowed.\n");
            break;
        case 5: printf("Good bye...\n"); break;
        default: printf("Invalid input\n");
        }
    } while (ch != 5);
    return 0;
}
