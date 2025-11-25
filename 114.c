// Q114: Write a program to take a string s as input.
// The task is to find the length of the longest substring without repeating characters.
// Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int lengthOfLongestSubstring(char *s)
{
    int n = strlen(s);

    if (n == 0 || n == 1)
        return n;

    bool visited[256] = {false};
    int left = 0;
    int maxLen = 0;

    for (int right = 0; right < n; right++)
    {

        while (visited[s[right]])
        {
            visited[s[left]] = false;
            left++;
        }

        visited[s[right]] = true;

        int currentLen = right - left + 1;
        if (currentLen > maxLen)
            maxLen = currentLen;
    }
    return maxLen;
}

int main()
{
    char s1[] = "abcabcbb";
    printf("%d\n", lengthOfLongestSubstring(s1));

    char s2[] = "bbbbb";
    printf("%d\n", lengthOfLongestSubstring(s2));

    char s3[] = "pwwkew";
    printf("%d\n", lengthOfLongestSubstring(s3));

    return 0;
}
