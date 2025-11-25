// Q75: Add two matrices.

/*
Sample Test Cases:
        for (j = 0; j < c1; j++)
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

int main()
{
    int r1, c1, r2, c2, i, j;
    scanf("%d %d", &r1, &c1);
    int m1[r1][c1];
    for (i = 0; i < r1; i++)
    {
        scanf("%d", &m1[i][j]);
    }

    scanf("%d %d", &r2, &c2);
    int m2[r2][c2];

    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        scanf("%d", &m2[i][j]);
    }

    int m3[r1][c1];

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        m3[i][j] = m1[i][j] + m2[i][j];
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        printf("%d ", m3[i][j]);
        printf("\n");
    }

    return 0;
}
