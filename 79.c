// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main()
{
    int r, c;

    scanf("%d %d", &r, &c);
    int matrix[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            scanf("%d", &matrix[i][j]);
    }

  
    int row = 0, col = 0;
    int d = 1; 

    for (int i = 0; i < r * c; i++)
    {
     
        printf("%d ", matrix[row][col]);

    
        int newRow = row + (d == 1 ? -1 : 1);
        int newCol = col + (d == 1 ? 1 : -1);

        if (newRow >= 0 && newRow < r && newCol >= 0 && newCol < c)
        {
            row = newRow;
            col = newCol;
        }
        else
        {

            if (d == 1)
            {
                if (col == c - 1)
                    row++;
                else
                    col++;
            }
            else
            {
                if (row == r - 1)
                    col++;
                else
                    row++;
            }

            d = -d;
        }
    }

    printf("\n");

    return 0;
}
