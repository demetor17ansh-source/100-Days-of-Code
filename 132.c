//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include <stdio.h>
#include <string.h>

typedef enum {
    RED,
    YELLOW,
    GREEN
} TrafficLight;

void printAction(TrafficLight light) {
    switch(light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid signal\n");
    }
}

int main() {
    char input[10];
    
    printf("Enter traffic light color (RED/YELLOW/GREEN): ");
    scanf("%s", input);
    
    if(strcmp(input, "RED") == 0) 
        printAction(RED);
    
    else if(strcmp(input, "YELLOW") == 0) 
        printAction(YELLOW);
    
    else if(strcmp(input, "GREEN") == 0) 
        printAction(GREEN);
    
    else 
        printf("Invalid color!\n");
    
    
    return 0;
}
