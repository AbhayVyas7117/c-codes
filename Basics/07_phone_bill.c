// Phone bill: Rs 250 for 100 calls, Rs 1.25 per extra call
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int calls;
    float bill;
    printf("Enter the number of calls made: ");
    scanf("%d", &calls);
    if (calls < 0) {
        printf("Invalid\n");
    } else if (calls <= 100) {
        printf("The bill is: 250.00\n");
    } else {
        bill = 250 + (calls - 100) * 1.25;
        printf("The bill is: %.2f\n", bill);
    }
    return 0;
}
