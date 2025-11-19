// Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[50];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int pos;
    scanf("%d", &pos);

    for (int i = pos; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    for (int i = 0; i < n; i++)
        printf(" %d", a[i]);

    return 0;
}
