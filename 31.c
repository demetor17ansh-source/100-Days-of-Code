//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

void print_binary(unsigned int n) {
    if (n > 1) {
        print_binary(n / 2);
    }
    printf("%u", n % 2);
}

int main(void) {
    unsigned int num;
    printf("Enter a number");
    scanf("%u", &num);
  
    if (num == 0) {
        printf("0\n");
        return 0;
    }

    print_binary(num);
    printf("\n");
    return 0;
}

