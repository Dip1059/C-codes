#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int n,i,j=15,k=45,p=0;
    while(scanf("%llu",&n)==1)
    {
        if(n>=7)
        {
            for(i=7; i<=n; i=i+2)
            {
                p=k-j+12+k;
                j=k;
                k=p;
            }
            printf("%llu\n",p);
        }
        else if(n==3)
            printf("%llu\n",j);
        else if(n==5)
            printf("%llu\n",k);
        j=15;k=45;p=0;
    }
    return 0;
}
