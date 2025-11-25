//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int i;
    
    printf("Enter a string:\n ");
    scanf("%s", str);
 
    for(i = 0; str[i] != '\0'; i++) 
        length++;

    printf("%d\n", length);
    
    return 0;
}
