// Q121: Write a C program that creates a text file named info.txt in write mode. 
// The program should take the user’s name and age as input, and write them to the file using fprintf(). 
// After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include <stdio.h>

int main() {
    FILE *file;
    char name[100];
    int age;
    
    printf("Enter Name: ");
    scanf("%[^\n]", name);
    
    printf("Enter Age: ");
    scanf("%d", &age);
    
    file = fopen("info.txt", "w");
    
    if(file == NULL) {
        printf("Error: Could not create file!\n");
        return 1;
    }
    
    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);
    
    fclose(file);
    printf("File created successfully! Data written to info.txt\n");
    
    return 0;
}
