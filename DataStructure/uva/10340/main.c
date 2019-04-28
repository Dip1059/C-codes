#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,k,l=0,m=0,n=0;
    char a[100000],b[100000];
    while(scanf("%s%s",a,b)==2)
    {
        m=strlen(a);
        n=strlen(b);
        if(m>n)
            printf("No\n");
        else
        {
            for(i=0; i<n; i++)
            {
                if(a[l]==b[i])
                    l++;
                else
                    if(l==m)
                        break;
                    continue;
            }
            if(l==m)
                printf("Yes\n");
            else
                printf("No\n");
        }
        l=0;m=0;n=0;
    }
    return 0;
}
