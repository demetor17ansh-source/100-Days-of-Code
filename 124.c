// Q124: Take two filenames from the user – a source file and a destination file. 
// Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceFileName[100], destFileName[100];
    char ch;
    
    printf("Enter source filename: ");
    scanf("%s", sourceFileName);
    
    sourceFile = fopen(sourceFileName, "r");
    
    if(sourceFile == NULL) {
        printf("Error: Cannot open source file '%s'\n", sourceFileName);
        return 1;
    }
    printf("Enter destination filename: ");
    scanf("%s", destFileName);
    
    destFile = fopen(destFileName, "w");
    
    if(destFile == NULL) {
        printf("Error: Cannot create destination file '%s'\n", destFileName);
        fclose(sourceFile);
        return 1;
    }
    
    while((ch = fgetc(sourceFile)) != EOF) 
        fputc(ch, destFile);
    
    fclose(sourceFile);
    fclose(destFile);
    printf("File copied successfully to %s\n", destFileName);
    
    return 0;
}
