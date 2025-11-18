// Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main(void)
{
    int num;
    printf("Enter a number ");
    scanf("%d", &num);

    int original = num;
    int last_digit = num % 10;
    int first_digit = num;
    while (first_digit >= 10)
        first_digit /= 10;

    int middle;
    int swapped;
    int digits = (int)log10(original) + 1;
    int power = (int)pow(10, digits - 1);

    middle = (num - (first_digit * power) - last_digit) / 10;
    swapped = last_digit * power + middle * 10 + first_digit;
   
    printf("%d\n", swapped);

    return 0;
}
