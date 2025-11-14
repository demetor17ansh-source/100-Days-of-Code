// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{

    int a, b;
    printf("Enter a number\n");
    scanf("%d", &a);
    printf("Enter a number\n");
    scanf("%d", &b);

    printf("The sum is %d\n", a + b);
    printf("The difference is %d\n", a - b);
    printf("The product is %d\n", a * b);
    if (b != 0)
        printf("The quotient is %d\n", a % b);
    else
        printf("Quotient not possible\n");
    return 0;
}
