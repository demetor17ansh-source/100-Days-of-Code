//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter limit");
    scanf("%d", &n);
        if (n < 2) {
        printf("0\n");
        return 0;
    }

    long long product = 1LL;
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }
    printf("%lld\n", product);
    return 0;
}
