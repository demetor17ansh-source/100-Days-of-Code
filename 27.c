//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n;
    printf("Enter limit");
    scanf("%d", &n);
    if (n < 1) {
        printf("0\n");
        return 0;
    }

    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 2 * i - 1;
    }
    printf("%lld\n", sum);

    return 0;
}
