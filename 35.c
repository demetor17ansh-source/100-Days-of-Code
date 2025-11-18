//Write a program to print all factors of a given number.
#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    printf("Enter a number");
    scanf("%d", &n);
   
    if (n <= 0) {
        printf("No factors (non-positive input)\n");
        return 1;
    }

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            if (i != n / i) {
                printf("%d ", n / i);
            }
        }
    }
    printf("\n");
    return 0;
}
