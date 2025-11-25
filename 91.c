//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    len = strlen(str);
    
    for(i = 0; i < len; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
           str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || 
           str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || 
           str[i] == 'U') {
            for(j = i; j < len; j++) 
                str[j] = str[j + 1];
            
            len--; 
            i--;   
        }
    }
    
    printf("String after removing vowels: %s\n", str);
    return 0;
}
