#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n,i,j,k;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld%lld%lld",&i,&j,&k);
        if(i+j>k&&j+k>i&&k+i>j)
            printf("OK!!\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
