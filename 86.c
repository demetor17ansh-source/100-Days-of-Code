//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;
    int flag = 1;  
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    while(str[length] != '\0') 
        length++;
    
    for(i = 0; i < length/2; i++) {
        if(str[i] != str[length - 1 - i]) {
            flag = 0;  
            break;
        }
    }
    
    if(flag=1) 
        printf("Palindrome\n");
     else 
        printf("Not palindrome\n");
    return 0;
}
