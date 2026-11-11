// Multi Dimension Array
// syntax
// <Type><var>[row][col]

// ex
// int x[3][5];
// #include <stdio.h>
// void main()
// {
//     int x[3][5], i, j;
//     for (i = 0; i <= 2; i++)
//     {
//         for (j = 0; j <= 4; j++)
//         {
//             printf("Enter Values @ x[%d][%d]:", i, j);
//             scanf("%d", &x[i][j]);
//         }
//     }
//     for (i = 0; i <= 2; i++)
//     {
//         for (j = 0; j <= 4; j++)
//         {
//             printf("%d ", x[i][j]);
//         }
//     printf("\n")
// }
// }
// #include <stdio.h>
// void main()
// {
//     int x[3][5], i, j, s = 0;
//     for (i = 0; i <= 2; i++)
//     {
//         for (j = 0; j <= 4; j++)
//         {
//             printf("Enter Values @ x[%d][%d]:", i, j);
//             scanf("%d", &x[i][j]);
//         }
//     }
//     for (i = 0; i <= 2; i++)
//     {
//         for (j = 0; j <= 4; j++)
//         {
//             printf("%d ", x[i][j]);
//             s = s + x[i][j];
//         }
//         printf("\n");
//     }
//     printf("Sum of %d", s);
// }
#include <stdio.h>
void main()
{
    int x[3][5], i, j, s = 0;

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            printf("Enter Values @ x[%d][%d]:", i, j);
            scanf("%d", &x[i][j]);
        }
    }

    for (i = 0; i <= 2; i++)
    {
        s = 0;

        for (j = 0; j <= 4; j++)
        {
            printf("%d ", x[i][j]);
            s = s + x[i][j];
        }

        printf("Sum = %d\n", s);
    }
}