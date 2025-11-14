// Write a program to input two numbers and display their sum.

#include <stdio.h>
int main()
{
    int a, b;
    int sum = 0;

    printf("Enter a number");
    scanf("%d", &a);
    printf("Enter a number");
    scanf("%d", &b);

    sum = a + b;

    printf("The sum is %d", sum);

    return 0;
}