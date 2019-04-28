#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[10];
    int n;
    unsigned long long int k=0,p=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",a);
        if(a[0]=='d')
        {
            scanf("%llu",&k);
            p=k+p;
        }
        else if(a[0]=='r')
            printf("%llu\n",p);
    }
    return 0;
}
