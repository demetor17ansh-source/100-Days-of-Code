//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main(){
    
    float si=0,ci=0,p,r,t;
    printf("Enter principal\n");
    scanf("%f",&p);
    printf("Enter rate\n");
    scanf("%f",&r);
    printf("Enter time\n");
    scanf("%f",&t);
    
    printf("Simple interest is %f\n",(p*r*t)/100.0);
    printf("Compound interest is %f\n",p*pow((1+r/100.0),t)-p);
    return 0;
}