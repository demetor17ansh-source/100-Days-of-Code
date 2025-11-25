// Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase).
//  The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies.
//  Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char *s, char *t)
{
    int lenS = strlen(s);
    int lenT = strlen(t);

    if (lenS != lenT)
        return false;

    int freq[26] = {0};

    for (int i = 0; i < lenS; i++)
        freq[s[i] - 'a']++;

    for (int i = 0; i < lenT; i++)
        freq[t[i] - 'a']--;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
            return false;
    }

    return true;
}

int main()
{
    char s1[] = "anagram";
    char t1[] = "nagaram";

    if (isAnagram(s1, t1))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    char s2[] = "rat";
    char t2[] = "car";

    if (isAnagram(s2, t2))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
