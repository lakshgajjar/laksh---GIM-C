#include<stdio.h>
void main()
{
    int num, i, count = 0;
    printf(" Enter Number:-");
    scanf("%d" , &num);

    for(i = 1 ;num!= 0 ; i++)
    {
        printf("\n num%d" , num);
        num = num/10;
        count ++;
    }
    
    printf("\n Number of count :-%d",count);
}
