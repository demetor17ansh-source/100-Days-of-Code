//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include <string.h>

int main(void) {
    char binary[100];
    printf("Enter a binary number");
    scanf("%s", binary); 
   
    int len = strlen(binary);
    if (len == 0 || len > 99) {
        printf("Invalid binary string\n");
        return 0;
    }

    for (int i = 0; i < len; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Invalid binary string\n");
            return 0;
        }
    }

    for (int i = 0; i < len; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        }
         else 
            binary[i] = '0';
    }
    printf("%s\n", binary);
    return 0;
}
