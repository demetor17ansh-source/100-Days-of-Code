//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Enter coefficients a, b, c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input\n");
        return 1;
    }
    if (a == 0.0) {
        printf("Not a quadratic equation (a must be non-zero)\n");
        return 0;
    }

    double D = b*b - 4.0*a*c;

    if (D > 0.0) {
        /* Real and distinct */
        double sqrtD = sqrt(D);
        double r1 = (-b + sqrtD) / (2.0*a);
        double r2 = (-b - sqrtD) / (2.0*a);
        printf("Nature: Real and distinct\n");
        printf("Roots: x1 = %.10g, x2 = %.10g\n", r1, r2);
    } else if (D == 0.0) {
        /* Real and equal */
        double r = -b / (2.0*a);
        printf("Nature: Real and equal\n");
        printf("Roots: x1 = x2 = %.10g\n", r);
    } else {
        /* Complex conjugates */
        double real = -b / (2.0*a);
        double imag = sqrt(-D) / (2.0*a);
        printf("Nature: Complex conjugates\n");
        printf("Roots: x1 = %.10g + %.10gi, x2 = %.10g - %.10gi\n", real, imag, real, imag);
    }
    return 0;
}
