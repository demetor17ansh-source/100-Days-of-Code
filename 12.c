//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);

    if(n==0)
    printf("Number is zero");
    else if(n>0)
    printf("Number is positive");
    else 
    printf("Number is negative");
    
    return 0;

}