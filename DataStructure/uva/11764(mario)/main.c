#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,i,j,h=0,l=0,k=0;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        int a[n];
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
            if(k>0)
                if(a[j-1]>a[j])
                    l++;
                else if(a[j-1]<a[j])
                    h++;
            k++;
        }
        printf("Case %d: %d %d\n",i,h,l);
        h=0;
        l=0;
        k=0;
    }
    return 0;
}
