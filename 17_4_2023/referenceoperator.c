#include<stdio.h>
void main()
{
    int num=56;//integer variable
    int *var=6422300;//integer pointer variable

printf("%d   %d\n",num,&num);//
printf("%d   %d   %d\n",var,&var,*var);
}
//6422600 
/*
Memory address      VaLue   variable
0
191                 0
190                 0
189                 0
188                 200     a    int a=200
--------------------------------
391                 0
390                 0
389                 0
388                 188     num    int *num=188

printf("%d",num) ==> 188
printf("%d",&num) ==> 388
printf("%d",a) ==> 200
printf("%d",&a) ==> 188
printf("%d",*a) ??? syntax error bcoz a is not a pointer
printf("%d",*num) ==>200 
num=191
printf("%d",num) ==> 191
printf("%d",&num) ==> 388 
printf("%d",a) ==> 200
printf("%d",&a) ==> 188
printf("%d",*num) ==>0




*/