#include<stdio.h>
int main()
{
    int ar[3][2];
    int i,j;
    for(i=0;i<=2;i++)
        for(j=0;j<=1;j++)
            scanf("%d",&ar[i][j]);
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=1;j++)
        printf("%d\t",ar[i][j]);
        printf("\n\n");
    }



}
