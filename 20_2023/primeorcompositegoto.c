#include<stdio.h>
int main()
{
    int a;
    printf("Enter value of a : ");
    scanf("%d",&a);
    if(a==0 || a==1)
    {
        printf("%d is neither prime nor composite ",a);
        return 0;
    }
    else
    {
        
        //2 to 100
         for(int i=2;i<a;i++)//2<6
         {
            if(a%i==0)//6%2 0==0
            {
             
                printf("%d number is composite",a);
                goto lab;
            }
         }
       
        printf("%d number is prime",a);
        lab:
        getchar();
    }
}