// Q116: Write a program to take an integer array nums which contains only positive integers,
// and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target.
// Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output.
//  If no solution exists, print "-1 -1".

/*
Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int value;
    int index;
} Element;

int compare(const void *a, const void *b)
{
    Element *elemA = (Element *)a;
    Element *elemB = (Element *)b;
    return elemA->value - elemB->value;
}

void twoSumTwoPointers(int nums[], int n, int target)
{
    Element elements[n];
    for (int i = 0; i < n; i++)
    {
        elements[i].value = nums[i];
        elements[i].index = i;
    }

    qsort(elements, n, sizeof(Element), compare);

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        int sum = elements[left].value + elements[right].value;

        if (sum == target)
        {
            int idx1 = elements[left].index;
            int idx2 = elements[right].index;
            if (idx1 > idx2)
            {
                int temp = idx1;
                idx1 = idx2;
                idx2 = temp;
            }
            printf("%d %d\n", idx1, idx2);
            return;
        }
        else if (sum < target)
            left++;

        else
            right--;
    }
    printf("-1 -1\n");
}
