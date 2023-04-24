

#include<stdio.h>
int main()
{
    int num[5]; //declaration & initializing num[0],num[1],num[2],...,num[4]
    printf("Enter elements in array (5)\n");
     for(int i=0;i<5;i++)
    {
    scanf("%d",&num[i]);
    }
 printf("Scanned elements in array (5)\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",num[i]);
    }
    
    
}