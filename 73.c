// Q73: Find the sum of each row of a m and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main()
{
    int r, c, i, j;

    scanf("%d %d", &r, &c);

    int m[r][c];
    int rowSum[r];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
    }

    for (i = 0; i < r; i++)
    {
        rowSum[i] = 0;
        for (j = 0; j < c; j++)
            rowSum[i] += m[i][j];
    }

    for (i = 0; i < r; i++)
        printf("%d ", rowSum[i]);
    return 0;
}
