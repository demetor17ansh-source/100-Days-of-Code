// Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main()
{
    int r1, c1;
    scanf("%d %d", &r1, &c1);

    int matrix1[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
            scanf("%d", &matrix1[i][j]);
    }

    int r2, c2;
    scanf("%d %d", &r2, &c2);

    int matrix2[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
            scanf("%d", &matrix2[i][j]);
    }
    if (c1 != r2)
    {
        printf("Matrix multiplication not possible\n");
        return 0;
    }
    int result[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
            result[i][j] = 0;
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
                result[i][j] += matrix1[i][k] * matrix2[k][j];
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}
