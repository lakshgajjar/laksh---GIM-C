#include<stdio.h>
void main ()
{
    int num, i ,count = 0,last,first;
    printf("Enter Number:-");
    scanf("%d" , &num);

    last = num%10;

    for(i=1; num!= 0;i++)
    {
        printf("\n num %d",num);
        first = num;
        num = num/10;
        count ++;
    }
    printf("\n Number of count:-%d" ,count);
    printf("\n first %D last %d,first,last");
    printf("\n sum of first and last digits :- %d", first + last);
}