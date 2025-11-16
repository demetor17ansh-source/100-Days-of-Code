//Write a program to print numbers from 1 to n.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the limit ");
    scanf("%d", &n);
    if (n < 1) {
        printf("\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        if (i > 1) 
        printf(" ");
        printf("%d", i);
    }
    printf("\n");
    return 0;
}
