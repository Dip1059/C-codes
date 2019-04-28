#include <stdio.h>
#include <stdlib.h>

long long rev(long long n,long long s)
{
    while(n!=0)
    {
        s=s*10+n%10;
        n/=10;
    }
    return s;
}

int main()
{
    long long a,b,n,s=0,c,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        n=a;
        s=rev(n,s);
        a=s;
        s=0;
        n=b;
        s=rev(n,s);
        b=s;
        s=0;
        c=a+b;
        n=c;
        s=rev(n,s);
        c=s;
        s=0;

        printf("%lld\n",c);
    }
    return 0;
}
