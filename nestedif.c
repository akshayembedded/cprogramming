#include <stdio.h>
int main ()
{
 /* local variable definition */
 int a,b;
 printf("Enter value of a : ");
 scanf("%d",&a);
 printf("Enter value of b : ");
 scanf("%d",&b);
 if(a==100)
 {
    printf("\nValue of a is 100");
    if(b==200)
    {
        printf("\nValue of b is 200");
    }
    else
    {
        printf("\nValue of b is not 200");
    }
 }
 else
 {
    printf("\nValue of a is not 100");
    if(b==200)
    {
        printf("\nValue of b is 200");
    }
    else
    {
        printf("\nValue of b is not 200");
    }
 }
}