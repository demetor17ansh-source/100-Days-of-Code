// Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>
#include <math.h>

int is_prime(int x)
{
    if (x < 2)
        return 0;
    if (x == 2)
        return 1;
    if (x % 2 == 0)
        return 0;
    int r = (int)sqrt((double)x);
    for (int d = 3; d <= r; d += 2)
    {
        if (x % d == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter the limit");
    scanf("%d", &n);
    int first = 1;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i))
        {
            if (!first)
                printf(" ");
            printf("%d", i);
            first = 0;
        }
    }
    return 0;
}
