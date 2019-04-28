#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,p,i,j,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d",&n,&k,&p);
        for(j=1; j<=p; j++,k++)
        {
            if(k==n)
                k=0;
        }
        printf("Case %d: %d\n",i,k);
    }
    return 0;
}
