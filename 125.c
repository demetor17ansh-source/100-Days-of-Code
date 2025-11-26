// Q125: Open an existing file in append mode and allow the user to enter a new line of text.
// Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char filename[100];
    char text[500];

    printf("Enter filename: ");
    scanf("%s", filename);
    getchar();

    file = fopen(filename, "a");
    if (file == NULL)
    {
        printf("Error: Cannot open file '%s'\n", filename);
        return 1;
    }
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    fprintf(file, "%s", text);
    fclose(file);
    printf("File updated successfully with appended text.\n");

    return 0;
}
