#include<stdio.h>
void main()
{
    int a;
    printf("Enter value of a : ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Number is positive ");
    }
    else if(a<0)
    {
        printf("Number is negative ");
    }
    else
    {
        printf("Number Zero ");
    }
}