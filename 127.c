// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase,
//  and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>

int main() {
    FILE *input, *output;
    char ch;
    
    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");
    
    if(input == NULL || output == NULL) {
        printf("Error opening files!\n");
        return 1;
    }
    
    while((ch = fgetc(input)) != EOF) {
        if(ch >= 'a' && ch <= 'z') {
            ch = ch - 32; 
        }
        fputc(ch, output);
    }
    
    fclose(input);
    fclose(output);
    
    printf("Conversion completed!\n");
    
    return 0;
}
