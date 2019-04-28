#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100];
    int n,i;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",a);
        i=strlen(a);
        if(i==3)
        {
            if(a[0]=='o')
                printf("1\n");
            else if(a[0]=='t')
                printf("2\n");
        }
        else if(i==5)
            printf("3\n");
    }
    return 0;
}
