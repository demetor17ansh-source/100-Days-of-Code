// Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
// The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target
//  and print the index of first and last occurrence. 
// Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
#include <stdio.h>

int findFirstOccurrence(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            first = mid;
            high = mid - 1; 
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return first;
}

int findLastOccurrence(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return last;
}

int main()
{
    int arr[] = {5, 7, 7, 8, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    int first = findFirstOccurrence(arr, n, target);
    int last = findLastOccurrence(arr, n, target);

    printf("%d,%d\n", first, last);

    return 0;
}
