#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int p=1,j=0,n;
    while(scanf("%lld",&n)==1)
    {
        for(; ;)
        {

            if(j==0)
            {
                p*=9;
                j=1;
            }
            else
            {
                p*=2;
                j=0;
            }
            if(p>=n)
                break;
        }
        if(j!=0)
            printf("Stan wins.\n");
        else
            printf("Ollie wins.\n");
        p=1;j=0;
    }
    return 0;
}
