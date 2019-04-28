#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,j=0;
    while(scanf("%d%d",&a,&b)==2&&a!=-1&&b!=-1)
    {
        if(a>b)
            j=a-b;
        else
            j=b-a;
        if(j>50)
            j=50-(j-50);
        printf("%d\n",j);
        j=0;
    }
    return 0;
}
