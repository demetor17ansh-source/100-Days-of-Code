// Write a program to calculate the factorial of a number.
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Error: negative input\n");
        return 1;
    }

    long long fact = 1LL;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("%lld\n", fact);
    return 0;
}
