#include <stdio.h>
#include <stdlib.h>

int fib(int n){
int i;
for(i=1;i<=n;i++)
{
if(n==1) return 0;
if(n==2) return 1;
return fib(n-1)+fib(n-2);
}
}

int main()
{
    int n,i,x;
    e:
    scanf("%d",&n);

        x= fib(n);
        for(i=1;i<=n;i++)
        printf("%d\n",x);
    goto e;
    return 0;
}
