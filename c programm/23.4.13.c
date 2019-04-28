#include<stdio.h>

long long int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    long long int t;
    int n;
    y:
    scanf("%d",&n);
    if(n==0)
        printf("1\n");
    else
    {
        t=fact(n);
        printf("%lld\n",t);
    }

    goto y;
    return 0;
}
