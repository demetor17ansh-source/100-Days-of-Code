// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[50];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int key;
    scanf("%d", &key);

    int pos = n;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > key)
        {
            pos = i;
            break;
        }
    }

    for (int i = n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = key;
    n++;

    for (int i = 0; i < n; i++)
        printf(" %d", a[i]);
    return 0;
}
