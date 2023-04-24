#include<stdio.h>
void main()
{
    int a=622300, b=622400;
    double *an=622300, *bn=622400;
    printf("Values : %d %d",a,b);
    a++;
    b++;
    printf("\nValues : %d %d",a,b);
    printf("\nValues : %d %d",an,bn);
    an++;
    bn++;
    printf("\nValues : %d %d",an,bn);
}