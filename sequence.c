//Sequence 0 3 6 9 12 .... 300
#include <stdio.h>
int main ()
{
    int i;
    for(i=0;i<=300;i++)
    {
        if(i%3==0)
        {
        printf("%d  ",i);
        }
    }
 
}