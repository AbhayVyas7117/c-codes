// Arithmetic Operations
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    if (b != 0) {
        printf("Division: %d\n", a / b);
        printf("Modulus: %d\n", a % b);
    } else {
        printf("Division by zero is not allowed.\n");
    }
    return 0;
}
