//Write c program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
    float c,temp=0;
    printf("Enter temperatuer in Celcius\n");
    scanf("%f",&c);
    
    temp=(9.00/5.00)*c+32.00;
    printf("Temperature in fahrienheit is %f\n ",temp);

    return 0;
}
