//Write a program to find the LCM of two numbers.
#include <stdio.h>


long long gcd_ll(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a; 
}

long long lcm_ll(long long a, long long b) {
    if (a == 0 || b == 0) return 0;                
    long long g = gcd_ll(a, b);                     
    long long div = a / g;                          
    return llabs(div * b);                         
}

int main(void) {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) != 2) {
        fprintf(stderr, "Error: please enter two integers.\n");
        return 1;
    }
    long long l = lcm_ll(a, b);
    printf("LCM(%lld, %lld) = %lld\n", a, b, l);   
    return 0;
}
