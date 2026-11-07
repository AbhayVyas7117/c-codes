// Number Range Classifier
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int x;
    printf("Enter a number X: ");
    scanf("%d", &x);
    if (x == 0) printf("X is Zero\n");
    else if (x > 0 && x < 100) printf("X is Positive\n");
    else if (x >= 100 && x < 1000) printf("X is very positive\n");
    else if (x >= 1000) printf("X is hugely positive\n");
    else if (x < 0 && x > -100) printf("X is negative\n");
    else if (x <= -100 && x > -1000) printf("X is very negative\n");
    else printf("X is hugely negative\n");
    return 0;
}
