// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main()
{
    int n, m, a[50], b[50], c[50], k = 0;
    printf("Enter number of elements");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter number of elements");
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for (int i = 0; i < n; i++)
        c[k++] = a[i];
    for (int i = 0; i < m; i++)
        c[k++] = b[i];

    for (int i = 0; i < k; i++)
        printf(" %d", c[i]);
    return 0;
}