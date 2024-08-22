#include<stdio.h>
int main()
{
    int num;

    printf("Enter any number:-", num);
    scanf("%d", &num);

    if(num>0)
    {
        printf("This number is positive", num);
    }else if(num<0)
    {
        printf("This number is negative", num);
    }else
    {
        printf("This number is ney=utral", num);
    }
}