// Q76: Check if a m is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main()
{
    int r, c, i, j;
    int isSymmetric = 1;

    scanf("%d %d", &r, &c);
    int m[r][c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (m[i][j] != m[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric!=0)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
