//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main(void) {
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    if (num < 0) num = -num;  

    long long product = 1LL;
    int has_odd = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            has_odd = 1;
        }
        num /= 10;
    }
    if (!has_odd) product = 1LL;

    printf("%lld\n", product);
    return 0;
}
