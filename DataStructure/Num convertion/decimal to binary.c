#include <stdio.h>

int main()
{
    long long int i=1,j=0,q=0,r=0,n;
    int ar[100]={0};
l:
    scanf("%lld",&n);
    q=n/2;
    r=n%2;
    ar[0]=r;
    for(; ;)
    {
        if(q!=0)
        {
            ar[i]=q%2;
            q=q/2;
            i++;
        }
        else
            break;
        j++;
    }
    for(i=j; i>=0; i--)
        printf("%d",ar[i]);

    printf("\n%lld\n\n",j+1);

    i=1,j=0,q=0,r=0;
    goto l;
}
