//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 numbers");
    scanf("%d %d %d",&a ,&b, &c);

    if(a>b&&a>c)
    printf("First is greatest");
    else if(b>a&&b>c)
    printf("Second is greatest");
    else if(c>b&&c>a)
    printf("Third is greatest");
    
    return 0;
}