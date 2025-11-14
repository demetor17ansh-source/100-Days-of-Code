// Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter radius");
    scanf("%d", a);

    printf("The area of circle is %d", 3.14 * a * a);
    printf("The circumference of circle is %d", 2 * 3.14 * a);

    return 0;
}