// Q94: Find the lo word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], w[50], l[50];
    int i, j = 0, maxLen = 0, wordLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; i <= strlen(str); i++)
    {

        if (str[i] != ' ' && str[i] != '\0')
        {
            w[j] = str[i];
            j++;
        }
        else
        {
            w[j] = '\0';
            wordLen = strlen(w);

            if (wordLen > maxLen)
            {
                maxLen = wordLen;
                strcpy(l, w);
            }

            j = 0;
        }

        printf("%s\n", l);

        return 0;
    }
