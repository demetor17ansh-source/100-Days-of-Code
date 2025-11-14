// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main()
{
    int s = 0, h = 0, m = 0;
    printf("Enter time in seconds");
    scanf("%d", &s);
    h = s / 3600;
    m = (s % 3600) / 60;
    s = s % 60;
    printf("Time is Hours %d Minutes %d Seconds %d", h, m, s);
    return 0;
}