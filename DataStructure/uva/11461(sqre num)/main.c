#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,i,k=0,j=0,p=0;
    while(scanf("%d%d",&a,&b)==2&&a!=0&&b!=0)
    {
        p=sqrt(a);
        for(i=p; i<=b; i++)
        {
            k=i*i;
            if(k>b)
                break;
            else if(k==b)
            {
                j++;
                break;
            }
            if(k>=a)
                j++;
        }
        printf("%d\n",j);
        j=0;
        k=0;
        p=0;
    }
    return 0;
}
