#include<stdio.h>

int main()
{
    int a,b,sum,sub,multi,divi,modu;
    a = 15;
    b = 6;
    sum = a+b;
    sub = a-b;
    multi = a*b;
    divi = a/b;
    modu = a%b;
    printf("sum of 12 + 6 = %d",sum);
    printf("\nsub of 12 - 6 = %d",sub);
    printf("\nmulti of 12 * 6 = %d",multi);
    printf("\ndivision of 12 / 6 = %d",divi);
    printf("\nmodulo of 12 / 6 = %d",modu);
    return 0;
}