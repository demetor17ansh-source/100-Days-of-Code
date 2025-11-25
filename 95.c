// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

void rotateLeft(char *str)
{
    int len = strlen(str);
    char first = str[0];

    for (int i = 0; i < len - 1; i++)
        str[i] = str[i + 1];

    str[len - 1] = first;
}

int areRotations(char *str1, char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
        return 0;

    char temp[100];
    strcpy(temp, str1);

    for (int i = 0; i < len1; i++)
    {
        if (strcmp(temp, str2) == 0)
            return 1;
        rotateLeft(temp);
    }

    return 0;
}

int main()
{
    char str1[100], str2[100];

    scanf("%s", str1);
    scanf("%s", str2);

    if (areRotations(str1, str2))
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
