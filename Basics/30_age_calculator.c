// Age calculator (years, months, days)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#include <stdio.h>

int is_leap(int y)
{
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

int days_in_month(int m, int y)
{
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) return 31;
    if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
    return is_leap(y) ? 29 : 28;
}

int main(void)
{
    int bd, bm, by, cd, cm, cy;
    int days, months, years, pm;

    printf("Enter Born Date : ");  scanf("%d", &bd);
    printf("Enter Born Month : "); scanf("%d", &bm);
    printf("Enter Born Year : ");  scanf("%d", &by);
    printf("Enter Today Date : ");  scanf("%d", &cd);
    printf("Enter Today Month : "); scanf("%d", &cm);
    printf("Enter Today Year : ");  scanf("%d", &cy);

    if (by <= 0 || cy <= 0 || by > cy) { printf("Year is not valid\n"); return 0; }
    if (bm < 1 || bm > 12 || cm < 1 || cm > 12) { printf("Month is not valid\n"); return 0; }
    if (bd < 1 || bd > days_in_month(bm, by)) { printf("Birth date is not valid\n"); return 0; }
    if (cd < 1 || cd > days_in_month(cm, cy)) { printf("Today's date is not valid\n"); return 0; }
    if (cy == by && (cm < bm || (cm == bm && cd < bd))) { printf("Birth date cannot be in the future\n"); return 0; }

    years = cy - by;
    months = cm - bm;
    days = cd - bd;

    if (days < 0) {
        pm = cm - 1;
        int py = cy;
        if (pm == 0) { pm = 12; py--; }
        days += days_in_month(pm, py);
        months--;
    }
    if (months < 0) {
        months += 12;
        years--;
    }
    printf("Age: %d years, %d months, %d days\n", years, months, days);
    return 0;
}
