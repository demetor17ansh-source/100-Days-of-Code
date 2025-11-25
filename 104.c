// Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1
//  and x inclusively equals the sum of all elements between x and n inclusively. 
//  Print the pivot integer x. If no such integer exists, print -1. 
//  Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/


// #include <stdio.h>

// int pivotIntegerLogN(int n) {
//     int low = 1, high = n;
    
//     while(low <= high) {
//         int mid = low + (high - low) / 2;
//         int leftSum = (1 + mid) * mid / 2;
//         int rightSum = (mid + n) * (n - mid + 1) / 2;
        
//         if(leftSum == rightSum) 
//             return mid;  
//         else if(leftSum < rightSum) 
//             low = mid + 1; 
//         else 
//             high = mid - 1; 
//     }
    
//     return -1;
// }

#include <stdio.h>
#include <math.h>

int pivotIntegerO1(int n) {
    int totalSum = n * (n + 1) / 2;
    
    int sqrtVal = (int)sqrt(totalSum);
    
    if(sqrtVal * sqrtVal == totalSum) 
        return sqrtVal;    
    return -1;
}

int main() {
    int n = 8;
    printf("%d\n", pivotIntegerO1(n));  
    n = 1;
    printf("%d\n", pivotIntegerO1(n));  
    n = 4;
    printf("%d\n", pivotIntegerO1(n));  
    
    return 0;
}

