// Table With Repeat Option
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, n, t, ch;
    do {
        printf("Enter number: ");
        scanf("%d", &n);
        for (i = 1; i <= 10; i++) {
            t = n * i;
            printf("%dx%d=%d\n", n, i, t);
        }
        printf("More table? 1-Yes 0-No: ");
        scanf("%d", &ch);
    } while (ch == 1);
    return 0;
}
