#include<stdio.h>
int main()
{
    int mat[4][3]={
                    {15,10,33},
                    {5,10,3},
                    {5,100,200},
                    {5,2225,333}
                };

    int mat2[2][3]={15,10,33,5,10,3};
    for(int j=0;j<4;j++)
    {
    for(int i=0;i<3;i++)
    {
        printf("%d ",mat[j][i]);
    }
    printf("\n");
    }
}