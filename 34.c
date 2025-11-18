//Write a program to check if a number is prime.
#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    if (n <= 1) {
        printf("No\n");
        return 0;
    }
    if (n == 2) {
        printf("Yes\n");
        return 0;
    }
    if (n % 2 == 0) {
        printf("No\n");
        return 0;
    }

    /* Check odd divisors up to sqrt(n) */
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
