// Menu Even Odd Table
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int ch, i, t, n;
    do {
        printf("Menu\n1:Even\n2:Odd\n3:Table\n4:Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
        case 1:
            for (i = 2; i <= 10; i += 2) printf("%d ", i);
            break;
        case 2:
            for (i = 1; i <= 9; i += 2) printf("%d ", i);
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%d", &n);
            for (i = 1; i <= 10; i++) {
                t = n * i;
                printf("%dx%d=%d\n", n, i, t);
            }
            break;
        case 4:
            printf("Good bye...\n");
            break;
        default:
            printf("Invalid input");
        }
        printf("\n");
    } while (ch != 4);
    return 0;
}
