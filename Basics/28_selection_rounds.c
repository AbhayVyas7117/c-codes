// Selection Rounds
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int age, hs, exam, interview;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age < 18 || age > 25) { printf("Not eligible for 2nd round.\n"); return 0; }
    printf("Eligible for 2nd round.\nHigher secondary marks: ");
    scanf("%d", &hs);
    if (hs < 60 || hs > 100) { printf("Not eligible for 3rd round.\n"); return 0; }
    printf("Eligible for 3rd round.\nExam marks: ");
    scanf("%d", &exam);
    if (exam < 60 || exam > 100) { printf("Not eligible for 4th round.\n"); return 0; }
    printf("Eligible for 4th round.\nInterview marks: ");
    scanf("%d", &interview);
    if (interview >= 60 && interview <= 100)
        printf("You are selected!\n");
    else
        printf("Not selected in interview.\n");
    return 0;
}
