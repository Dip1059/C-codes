#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i,k;
    while(scanf("%d",&n)==1&&n!=0)
    {
        k=sqrt(n);
        for(i=2; i<=k; i++)
            if(n%i!=0)
                continue;
            else
                break;
        if(i>k)
            printf("%d is normal.\n",n);
        else
            printf("The number %d is a Carmichael number.\n",n);
    }
    return 0;
}
