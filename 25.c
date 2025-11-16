//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    long long a, b;
    char op;
    printf("Enter a number and Enter another number aand Enter a operator");
    scanf("%lld %lld %c", &a, &b, &op);

    switch (op) {
        case '+':
            printf("%lld\n", a + b);
            break;
        case '-':
            printf("%lld\n", a - b);
            break;
        case '*':
            printf("%lld\n", a * b);
            break;
        case '/':
            if (b == 0) 
            { printf("Error\n"); break; }
            printf("%lld\n", a / b);
            break;
        case '%':
            if (b == 0) 
            { printf("Error\n"); break; }
            printf("%lld\n", a % b);
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}
