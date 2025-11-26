//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>

typedef enum {
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
    EXIT
} MenuChoice;

void displayMenu() {
    printf("\n=== Calculator Menu ===\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("4. DIVIDE\n");
    printf("5. EXIT\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    float num1, num2, result;
    
    while(1) {
        displayMenu();
        scanf("%d", &choice);
        
        if(choice == EXIT) {
            printf("Goodbye!\n");
            break;
        }
        
        if(choice < ADD || choice > DIVIDE) {
            printf("Invalid choice!\n");
            continue;
        }
        
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        
        switch(choice) {
            case ADD:
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
                
            case SUBTRACT:
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
                
            case MULTIPLY:
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
                
            case DIVIDE:
                if(num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                } else 
                    printf("Error: Division by zero!\n");
                break;
                
            default:
                printf("Invalid operation!\n");
        }
    }
    
    return 0;
}
