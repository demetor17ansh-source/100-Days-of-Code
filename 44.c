// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number of terms\n");
    scanf("%d", &n);
    double sum = 0.0;

    for (int i = 1; i <= n; i++)
    {
        int numerator = 2 * i - 1;
        int denominator = 2 * i;
        sum += (double)numerator / denominator;
    }

    printf("Approximate sum: %0.2f\n", sum);
    return 0;
}
