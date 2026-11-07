// Age Group
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age < 1) printf("Invalid age\n");
    else if (age <= 12) printf("Child: %d\n", age);
    else if (age <= 19) printf("Teenager: %d\n", age);
    else if (age <= 35) printf("Young: %d\n", age);
    else if (age <= 50) printf("Middle age: %d\n", age);
    else printf("Old age: %d\n", age);
    return 0;
}
