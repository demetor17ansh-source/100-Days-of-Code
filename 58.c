//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of  elements");
    scanf("%d", &n) ;
    int a[50]; 

    for (int i = 0; i < n; i++){
     scanf("%d", &a[i]);
    } 

    
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j]; 
                a[j] = a[j + 1]; 
                a[j + 1] = t;
                swapped = 1;
            }
        }
        if (!swapped) break; 
    }

    printf("Max=%d, Min=%d", a[n - 1], a[0]);
    return 0;
}
