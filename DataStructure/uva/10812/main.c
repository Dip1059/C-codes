#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        if(a<b)
            printf("impossible\n");
        else
        {
            c=(a+b)/2;
            d=a-c;
            if(c-d!=b)
                printf("impossible\n");
            else
                printf("%d %d\n",c,d);
        }
    }
    return 0;
}
