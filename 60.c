//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include<stdio.h>

    int main(){
    
    int a[50],n,positive=0,negative=0,zero=0;
    
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
 
        for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        positive++;
        else if(a[i<0])
        negative++;
        else
        zero;
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n",positive,negative,zero);
    return 0;
}