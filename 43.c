//Q43: Write a program to check if a number is a strong number.
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(void) {
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    int original = num;
    int sum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    
    if (sum == original) 
        printf("Strong number\n");
     else 
        printf("Not strong number\n");
    return 0;
}
