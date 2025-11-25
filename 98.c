// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[100];
    int i, lastSpaceIndex = -1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    for (i = 0; i < strlen(name); i++)
    {
        if (name[i] == ' ')
            lastSpaceIndex = i;
    }

    if (name[0] != ' ' && name[0] != '\0')
        printf("%c.", toupper(name[0]));

    for (i = 0; i < lastSpaceIndex; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c.", toupper(name[i + 1]));
    }

    if (lastSpaceIndex != -1)
    {
        printf(" ");
        for (i = lastSpaceIndex + 1; i < strlen(name); i++)
            printf("%c", name[i]);
    }

    printf("\n");

    return 0;
}
