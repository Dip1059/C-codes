#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0,t,k,j,l;
    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
        scanf("%d",&n);
        int a[n];
        for(l=0; l<n; l++)
            scanf("%d",&a[l]);

        for(j=1; j<n; j++)
            if(a[i]>=a[j])
                continue;
            else
                i=j;


        printf("Case %d: %d\n",k,a[i]);
    }
    return 0;
}
