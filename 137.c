//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>

typedef enum {
    ADMIN,
    USER,
    GUEST
} UserRole;

void displayWelcomeMessage(UserRole role) {
    switch(role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Unknown role!\n");
    }
}

int main() {
    char input[20];
    
    printf("Enter role (ADMIN/USER/GUEST): ");
    scanf("%s", input);
    
    if(strcmp(input, "ADMIN") == 0) 
        displayWelcomeMessage(ADMIN);
    
    else if(strcmp(input, "USER") == 0) 
        displayWelcomeMessage(USER);
    
    else if(strcmp(input, "GUEST") == 0) 
        displayWelcomeMessage(GUEST);
    
    else 
        printf("Invalid role!\n");
    
    
    return 0;
}
