#include <stdio.h>
int main()
{
    int i,j,n,m;
    scanf("%d%d",&n,&m);
    int ara[n][m];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&ara[i][j]);
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
        printf("%d",ara[i][j]);}

