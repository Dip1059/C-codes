#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j,k,l;
    scanf("%d",&n);
    while(n--)
    {
        printf("\n");
        scanf("%d",&m);
        int d[m][2];
        char a[m+1];
        char b[m+1],c[m+1];
        for(i=0; i<m; i++)
        {
            scanf("%d%d",&d[i][0],&d[i][1]);
            a[i]=d[i][0]+48;
            b[i]=d[i][1]+48;
        }
        a[m]=NULL;
        b[m]=NULL;
    }
    return 0;
}
