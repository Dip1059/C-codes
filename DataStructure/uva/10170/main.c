#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int s,d;
    while(scanf("%lld%lld",&s,&d)==2)
    {
        for(; ;)
        {
            d=d-s;
            if(d<=0)
                break;
            s++;
        }
        printf("%lld\n",s);
    }
    return 0;
}
