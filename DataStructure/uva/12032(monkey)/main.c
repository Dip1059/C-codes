#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,m=0,n,t,l=0;
    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
        scanf("%d",&n);
        int a[n];
        int b[n-1];
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(i=n-1,j=0; i>0; i--,j++)
            b[j]=a[i]-a[i-1];

        for(i=1; i<n-1; i++)
            if(b[l]>=b[i])
                continue;
            else
                l=i;

        printf("Case %d: %d\n",k,b[l]);
    }
    return 0;
}
