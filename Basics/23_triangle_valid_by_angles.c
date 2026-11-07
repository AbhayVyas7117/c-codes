// Triangle Valid By Angles
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int s1, s2, s3;
    printf("Enter angle 1: ");
    scanf("%d", &s1);
    printf("Enter angle 2: ");
    scanf("%d", &s2);
    printf("Enter angle 3: ");
    scanf("%d", &s3);
    if (s1 + s2 + s3 == 180 && s1 > 0 && s2 > 0 && s3 > 0)
        printf("Yes, it is a valid triangle\n");
    else
        printf("No, it is not a valid triangle\n");
    return 0;
}
