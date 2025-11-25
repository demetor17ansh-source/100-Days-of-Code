// Q119: Write a program to take an integer array as input.
// Only one element will be repeated.
// Print the repeated element.
// Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
#include <stdbool.h>

int findRepeatedElement(int arr[], int size) {
    bool visited[1000] = {false};  
    for(int i = 0; i < size; i++) {
        if(visited[arr[i]]) 
            return arr[i];
        
        visited[arr[i]] = true;
    }
    
    return -1;
}

int main() {
    int arr1[] = {1, 3, 3, 4};
    printf("%d\n", findRepeatedElement(arr1, 4));
    
    int arr2[] = {1, 2, 2};
    printf("%d\n", findRepeatedElement(arr2, 3));
    
    int arr3[] = {0, 4, 1, 1, 5};
    printf("%d\n", findRepeatedElement(arr3, 5));
    
    return 0;
}
