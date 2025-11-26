// Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>

typedef enum
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
} Month;

int main()
{
    const char *monthNames[] = {
        "", "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
        "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};

    int daysInMonth[] = {
        0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int m = JAN; m <= DEC; m++)
    {
        printf("%s: ", monthNames[m]);

        if (m == FEB)
            printf("28 or 29 days\n");
        else
            printf("%d days\n", daysInMonth[m]);
    }

    return 0;
}
