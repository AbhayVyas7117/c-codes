// Grade From Five Subjects
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int s[5], i, total = 0, pre;
    const char *names[] = {"physics", "chemistry", "maths", "computer", "english"};
    for (i = 0; i < 5; i++) {
        printf("Enter %s marks: ", names[i]);
        scanf("%d", &s[i]);
        total += s[i];
    }
    pre = total / 5;
    if (pre >= 90) printf("Grade A");
    else if (pre >= 80) printf("Grade B");
    else if (pre >= 70) printf("Grade C");
    else if (pre >= 60) printf("Grade D");
    else if (pre >= 40) printf("Grade E");
    else printf("Fail");
    printf(" (average %d)\n", pre);
    return 0;
}
