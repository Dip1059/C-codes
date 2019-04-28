#include<stdio.h>
int main()
{
    int a[10][10]={1},n,i,j;

    for(i=0;i<10;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0)
            a[i][j]=1;
            else if(i-1>=0||j-1>=0)

            a[i][j]=a[i-1][j]+a[i-1][j-1];


        printf("%d\t",a[i][j]);

       } printf("\n");

    }
}
