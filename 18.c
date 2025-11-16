// Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
// 90-100: Grade A 
// 80-89: Grade B 
// 70-79: Grade C 
// 60-69: Grade D 
// below 60: Grade F.
#include <stdio.h>

int main(void) {
    int pct;
    printf("Enter percentage (0-100): ");
    if (scanf("%d", &pct) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (pct < 0 || pct > 100) {
        printf("Error: percentage must be between 0 and 100\n");
        return 1;
    }

    char grade;
    if (pct >= 90) {
        grade = 'A';
    } else if (pct >= 80) {
        grade = 'B';
    } else if (pct >= 70) {
        grade = 'C';
    } else if (pct >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Grade: %c\n", grade);
    return 0;
}
