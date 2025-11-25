//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
#include <string.h>

void titleCase(char str[]) {
    int i;
    int len = strlen(str);
    
    if(str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;  
    
    for(i = 1; i < len; i++) {
        if(str[i - 1] == ' ') {
            if(str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
        }
        else {
            if(str[i] >= 'A' && str[i] <= 'Z') 
                str[i] = str[i] + 32;
            }
        }
    }
}

int main() {
    char str1[] = "I am trying to build logic.";
    titleCase(str1);
    printf("%s\n", str1);
    
    char str2[] = "The classes are supposed to start early.";
    titleCase(str2);
    printf("%s\n", str2);
    
    char str3[] = "We are going to look at 26 different test cases.";
    titleCase(str3);
    printf("%s\n", str3);
    
    return 0;
}
