//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
#include <string.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

void printStatusMessage(Status status) {
    switch(status) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Unknown status\n");
    }
}

int main() {
    char input[20];
    
    printf("Enter status (SUCCESS/FAILURE/TIMEOUT): ");
    scanf("%s", input);
    
    if(strcmp(input, "SUCCESS") == 0) 
        printStatusMessage(SUCCESS);
    
    else if(strcmp(input, "FAILURE") == 0) 
        printStatusMessage(FAILURE);
    
    else if(strcmp(input, "TIMEOUT") == 0) 
        printStatusMessage(TIMEOUT);
    
    else 
        printf("Invalid status!\n");
    
    
    return 0;
}
