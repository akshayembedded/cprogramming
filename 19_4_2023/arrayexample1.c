#include<stdio.h>
void main()
{
    int n[10]={12,433,556,1024,478,66,321,7,99,87};
    int num=10;
    int *poi=n;//memory add of 0th element
    /*
    data type of num ==> integer
    data type of n ==> integer array
    no of elements in n ==> 10
    data type of n[0] ==> integer
    */
   printf("%d\n",poi);//
   printf("%d\n",n);//
   printf("%d\n",*poi);//
   printf("%d\n",*(poi+2));//
}