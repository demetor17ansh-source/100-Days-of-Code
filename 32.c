//Write a program to check if a number is a palindrome
#include <stdio.h>

int main(void) {
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    if (num < 0) {
        printf("No (negative input)\n");
        return 1;
    }

    int original = num;
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (reversed == original) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
