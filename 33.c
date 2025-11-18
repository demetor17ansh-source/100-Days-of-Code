//Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int count_digits(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

long long power(int base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int num;
    printf("Enter a number");
    scanf("%d", &num);
   
    if (num < 0) {
        printf("No (negative input)\n");
        return 1;
    }

    int original = num;
    int digits = count_digits(num);
    long long sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += power(digit, digits);
        num /= 10;
    }

    if (sum == original) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
