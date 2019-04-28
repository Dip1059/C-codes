#include<stdio.h>

long long int fib(n)
{
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    return fib(n-1)+fib(n-2);
}

int main()
{
    long long int t;
    int n;
    e:
    scanf("%d",&n);
    t=fib(n);
    printf("%lld\n",t);

    goto e;
    return 0;

}
