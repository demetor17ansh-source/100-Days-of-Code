// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    int freq[10] = {0};
    while (n > 0)
    {
        int digit = n % 10;
        freq[digit]++;
        n /= 10;
    }
for (int i = 0; i < 10; i++)
        printf(" %d", freq[i]);
    int max_freq = 0, result = 0;
    for (int d = 0; d <= 9; d++)
    {
        if (freq[d] > max_freq)
        {
            max_freq = freq[d];
            result = d;
        }
    }

    printf("%d", result);
    return 0;
}
