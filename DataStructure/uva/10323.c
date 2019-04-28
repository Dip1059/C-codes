#include<stdio.h>
#include<stdlib.h>

int n;
long long int k=0;

long long int fact(int n)
{
    int i;
    long long int f=1;
    if(n<0&&n%2==0)
        n*=-1;
    for(i=1; i<=n; i++)
        f*=i;
    return f;
}

int main()
{
    while(scanf("%d",&n)==1)
        if(n>13||n<-13)
            printf("Overflow!\n");
        else if(n<8&&n>-8)
            printf("Underflow!\n");
        else
        {
            k=fact(n);
            if(k==1)
                printf("Underflow!\n");
            else
                printf("%lld\n",k);
        }

    return 0;
}
