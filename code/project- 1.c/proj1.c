#include<stdio.h>

int main()
{
    float c;
    float f;
    
printf("the temperature in celsius:");
    scanf("%f",&c);

    f = c*9/5 + 32;
    printf("The Temperature in Fahrenheit:%.1f",f);
}