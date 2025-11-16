//Write a program to reverse a given number.
#include <stdio.h>

int main(void) {
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    if (num < 0) {
        printf("Error: negative input\n");
        return 1;
    }

    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    printf("%d\n", reversed);
    return 0;
}
