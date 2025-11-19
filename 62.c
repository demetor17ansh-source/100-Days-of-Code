// Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>

int main()
{
    int n, a[50];
    printf("Enter number of elements");
    scanf("%d",&n);

    for (int m = 0; m < n; m++)
        scanf("%d",&a[m]);

    int i = 0, j = n - 1;
    while (i < j)
    {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++;
        j--;
    }

    for (int k = 0; k < n; k++)
       printf(" %d", a[k]);
       return 0;
}