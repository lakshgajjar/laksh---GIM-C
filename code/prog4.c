#include<stdio.h>
void main()
{
    int x,y,z,r;
    printf("Enter the x :- ");
    scanf("%d" , &x);
    printf("Enter the y :- ");
    scanf("%d" , &y);
    printf("Enter the z :- ");
    scanf("%d" , &z);
    printf("Enter the r :- ");
    scanf("%d" , &r);
    if (x >= y)
    {
        if (x >= z)
        {
            if(x >= r)
            {
                printf("x is max");
            }
            else
            {
                printf("r is max");
            } 
        }
        else
        {
            if(z >= r)
            {
                printf("z is max");
            }
            else
            {
                printf("r is max");
            }
        }
    }
    else
    {
        if(y >= z)
        {
            if(y >= r)
            {
                printf("y is max");
            }
            else
            {
                printf("r is max");
            }
        }
        else
        {
            if(z >= r)
            {
                printf("z is max");
            }
            else
            {
                printf("r is max");
            }
            
        }
    }
}