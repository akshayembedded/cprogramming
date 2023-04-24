//printng positive numbers in the list
#include<stdio.h>
int main()
{
    int num[10]; //declaration & initializing num[0],num[1],num[2],...,num[4]
    printf("Enter elements in array (10)\n");
     for(int i=0;i<10;i++)
    {
    scanf("%d",&num[i]);
    }
 printf("Positive elements in array (10)\n");
    for(int i=0;i<10;i++)
    {
        if(num[i]>0)
        {
            printf("%d\n",num[i]);
        }
        
    }    
}