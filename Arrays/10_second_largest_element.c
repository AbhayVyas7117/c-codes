// Second Largest Element
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, x[5], largest, secondlargest = 0;
    int found = 0;
    for (i = 0; i < 5; i++) {
        printf("Enter number @ %d: ", i);
        scanf("%d", &x[i]);
    }
    largest = x[0];
    for (i = 1; i < 5; i++)
        if (x[i] > largest)
            largest = x[i];
    for (i = 0; i < 5; i++) {
        if (x[i] < largest) {
            if (found == 0 || x[i] > secondlargest) {
                secondlargest = x[i];
                found = 1;
            }
        }
    }
    printf("Largest number is: %d\n", largest);
    if (found)
        printf("Second largest number is: %d\n", secondlargest);
    else
        printf("No second largest distinct number exists.\n");
    return 0;
}
