// Q117: Write a program to take two sorted arrays of size m and n as input.
// Merge both the arrays such that the merged array is also sorted.
// Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include <stdio.h>

void mergeInPlace(int nums1[], int m, int nums2[], int n, int size) {
    int i = m - 1;     
    int j = n - 1;      
    int k = m + n - 1; 
    
    while(j >= 0) {
        if(i >= 0 && nums1[i] > nums2[j]) 
            nums1[k--] = nums1[i--];
        else 
            nums1[k--] = nums2[j--];
        
    }
}

