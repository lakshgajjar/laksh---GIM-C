#include<stdio.h>

int main()
{
    int firstangle , secondangle , thirdangle ;

    printf("firstangle:");
    scanf("%d" , &firstangle);
    printf("secondangle:");
    scanf("%d" , &secondangle);

    thirdangle = 180 - firstangle-secondangle;

    printf("thirdangle : %d", thirdangle);
} 
