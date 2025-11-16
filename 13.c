//Write a program to input a and check whether it is a leap or not using conditional statements.
#include <stdio.h>

int main() {
    int y ;
    
    printf("Enter a year: ");
    scanf("%d", &y );
    
    if (( y % 400 == 0) || y  % 4 == 0 && y % 100 != 0) 
        printf("%d is a leap y.\n", y);
    else 
        printf("%d is not a leap y.\n", y);
    
    return 0;
}