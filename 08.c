//Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main(){

    int n,s=0;
    printf("Enter limit upto which sum to be found\n");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
    s=s+i;
    }
    
    printf("The sum is %d\n",s);
    return 0;
}