// Q105: Write a program to take an integer array nums of size n, and print the majority element.
// The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists.
// Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/

#include <stdio.h>

int findMajorityElement(int nums[], int n)
{
    int candidate = -1;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate)
            count++;
        else
            count--;
    }

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == candidate)
            count++;
    }

    if (count > n / 2)
        return candidate;
    return -1;
}

int main()
{
    int nums1[] = {3, 2, 3};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("%d\n", findMajorityElement(nums1, n1));

    int nums2[] = {2, 2, 1, 1, 1, 2, 2};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("%d\n", findMajorityElement(nums2, n2));

    int nums3[] = {2, 2, 1, 1, 1, 2, 2, 3};
    int n3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("%d\n", findMajorityElement(nums3, n3));

    return 0;
}
