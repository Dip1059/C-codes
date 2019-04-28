#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j=0,n,k=0,l=0;
    while(scanf("%d",&n)==1&&n!=0)
    {
        j++;
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==0)
                l++;
            else
                k++;
        }
        printf("Case %d: %d\n",j,k-l);
        k=0;l=0;
    }
    return 0;
}
