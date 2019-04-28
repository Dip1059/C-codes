#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t=0,n,i;
    while(scanf("%d",&n)==1&&n!=0)
    {
        t++;
        if(n%2!=0)
            n=n-1;
        i=n/2;
        printf("Case %d: %d\n",t,i);
    }
    return 0;
}
