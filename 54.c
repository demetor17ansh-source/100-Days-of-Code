/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include<stdio.h>

    int main(){
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4-i;j++)
        {
            printf(" ");
        }
          for(int k=1;k<=2*i-1;k++)
            {
              printf("*");
            }
        printf("\n");
    }   

        for(int i=3;i>=1;i--)
    {
        for(int j=1;j<=4-i;j++)
        {
            printf(" ");
        }
          for(int k=1;k<=2*i-1;k++)
            {
              printf("*");
            }
        printf("\n");
    }  
    return 0;
}

