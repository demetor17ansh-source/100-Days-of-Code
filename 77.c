// Q77: Check if the elements on the d of a m are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r, c;

    scanf("%d %d", &r, &c);

    int m[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        scanf("%d", &m[i][j]);
    }

    int ds = (r < c) ? r : c;
    int d[ds];

    for (int i = 0; i < ds; i++)
        d[i] = m[i][i];

    bool is_distinct = true;
    for (int i = 0; i < ds; i++)
    {
        for (int j = i + 1; j < ds; j++)
        {
            if (d[i] == d[j])
            {
                is_distinct = false;
                break;
            }
        }
        if (!is_distinct)
            break;
    }

    if (is_distinct)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}
