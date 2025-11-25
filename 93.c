// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};
    int i, a = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);
    if (strlen(str1) != strlen(str2))
    {
        printf("Not anagrams\n");
        return 0;
    }

    for (i = 0; i < strlen(str1); i++)
    {
        freq1[str1[i]]++;
        freq2[str2[i]]++;
    }
    for (i = 0; i < 256; i++)
    {
        if (freq1[i] != freq2[i])
        {
            a = 0;
            break;
        }
    }

    if (a)
        printf("Anagrams\n");

    else
        printf("Not anagrams\n");

    return 0;
}
