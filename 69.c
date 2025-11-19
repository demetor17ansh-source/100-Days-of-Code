//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

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

    printf("Second largest Number%d", a[n - 2]);
    return 0;
}
