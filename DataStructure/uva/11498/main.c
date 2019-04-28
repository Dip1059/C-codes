#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int i,a,b,c,d,k;
    while(scanf("%lld",&k)==1&&k!=0)
    {
        scanf("%lld%lld",&a,&b);
        for(i=1; i<=k; i++)
        {
            scanf("%lld%lld",&c,&d);
            if(c==a||d==b)
                printf("divisa\n");
            else if(c>a)
                if(d>b)
                    printf("NE\n");
                else
                    printf("SE\n");
            else
                if(d>b)
                    printf("NO\n");
                else
                    printf("SO\n");
        }
    }
    return 0;
}
