//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter 2 numbers");
    scanf("%d %d", &a, &b);
    
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;

    if (a == 0 && b == 0) {
        printf("0\n"); 
        return 0;
    }
    if (a == 0) {
        printf("%d\n", b);
        return 0;
    }
    if (b == 0) {
        printf("%d\n", a);
        return 0;
    }

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d\n", a);
    return 0;
}
