#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int a[50001],i,j,l=0,p=0;
    a[0]=0;
    for(i=1; i<50001; i++)
    {
        a[i]=i*i*i;
    }
    while(scanf("%llu",&j)==1)
    {
        for(i=0; i<j; i++,l++)
        {
            p+=a[l+1];
        }
        printf("%llu\n",p);
        p=0;l=0;
    }
    return 0;
}
