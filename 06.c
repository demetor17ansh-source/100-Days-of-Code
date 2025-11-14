//Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main(){
    int a,n,c=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Enter a number\n");
    scanf("%d",&n);
    n=c;
    a=n;
    c=a;
    printf("THe swapped numbers are%d and %d\n",a,n);

    return 0;
}