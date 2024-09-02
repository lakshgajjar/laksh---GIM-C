#include<stdio.h>

int main()
{
    int basesalary, hra, da, ta, fs;

    printf("enter your salary:");
    scanf("%d" , &basesalary);

    hra = basesalary * 10 / 100;
    da  = basesalary * 5 / 100;
    ta  = basesalary * 8 / 100;

    fs = basesalary + hra + da + ta ;

    printf(" gross salary:%d", fs);  
}