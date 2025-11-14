//Write a program to calculate the area and perimeter of a rectangle given its length and breadth
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter length");
    scanf("%d",a);
    printf("Enter breadth");
    scanf("%d",b);
    printf("The area of rectangle is%d",a*b);
    printf("The perimeter of rectangle is%d",2*(a+b));
    
    return 0;
}