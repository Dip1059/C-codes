#include <stdio.h>
#include <stdlib.h>

unsigned long long int a[50000000];
int main()
{
    unsigned long long int n,i,j=15,k=45,p=1;
    a[0]=15;
    a[1]=45;
    for(i=2; i<=50000000; i++)
            {
                a[i]=k-j+12+k;
                j=k;
                k=a[i];
            }
    while(scanf("%llu",&n)==1)
    {
        if(n>=7)
        {
            for(i=7; i<=n; i=i+2)
            {
                p++;
            }
            printf("%llu\n",a[p]);
        }
        else if(n==3)
            printf("%llu\n",a[0]);
        else if(n==5)
            printf("%llu\n",a[1]);
        p=1;
    }
    return 0;
}
