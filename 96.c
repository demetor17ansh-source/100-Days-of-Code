// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

void reverseRange(char str[], int start, int end)
{
    char temp;
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    char str[100];
    int i, start = -1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    for (i = 0; i <= len; i++)
    {
        if (start == -1 && str[i] != ' ' && str[i] != '\0')
            start = i;
        if (start != -1 && (str[i] == ' ' || str[i] == '\0'))
        {
            reverseRange(str, start, i - 1);
            start = -1;
        }
    }

    printf("%s\n", str);

    return 0;
}
