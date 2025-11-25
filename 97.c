// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[100];
    int i;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    if (name[0] != ' ' && name[0] != '\0')
        printf("%c.", toupper(name[0]));

    for (i = 0; i < strlen(name); i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c.", toupper(name[i + 1]));
    }

    printf("\n");
    return 0;
}
