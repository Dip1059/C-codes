#include <stdio.h>
#include <stdlib.h>

long mile(long p)
{
    long s;
    s=p%60;
    p=p/60;
    p=p*20;
    if(s<30)
        p=p+10;
    else
        p=p+20;
    return p;

}

long juice(long p)
{
    long s;
    s=p%120;
    p=p/120;
    p=p*30;
    if(s<60)
        p=p+15;
    else
        p=p+30;
    return p;

}

int main()
{
    long int t,n,i,j,k,m,M=0,J=0;
    scanf("%ld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%ld",&n);
        long a[n];
        for(k=0; k<n; k++)
        {
            scanf("%ld",&a[k]);
            a[k]=a[k]+1;
            m=mile(a[k]);
            M=M+m;
            j=juice(a[k]);
            J=J+j;
        }
        if(M>J)
            printf("Case %ld: Juice %ld\n",i,J);
        else if(J>M)
            printf("Case %ld: Mile %ld\n",i,M);
        else
            printf("Case %ld: Mile Juice %ld\n",i,J);
        M=0;J=0;
    }
    return 0;
}
