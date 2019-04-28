#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,i,j=0,k;
    scanf("%d",&n);
    for(k=1; k<=n; k++)
    {
        scanf("%d%d",&a,&b);
            for(i=a; i<=b; i++)
            {
                if(i%2!=0)
                    j+=i;
            }
        printf("Case %d: %d\n",k,j);
        j=0;
    }
    return 0;
}
