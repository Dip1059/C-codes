#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,l=0,k=0,j;
    char a[25],b[25];
    scanf("%d",&n);
    //printf("\n");
    for(i=1; i<=n; i++)
    {
        scanf("%s",a);
        scanf("%s",b);
        l=strlen(a);
        k=strlen(b);

        if(strcmp(a,b)==0)
            printf("Yes\n");

        else if(l!=k)
            printf("No\n");

        else if(l==k)
        {
            for(j=0; j<l; j++)
                if(a[j]!=b[j])
                 {
                     if((a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u')&&(b[j]=='a'||b[j]=='e'||b[j]=='i'||b[j]=='o'||b[j]=='u'))
                        continue;
                    else
                        break;
                 }
            if(j==l)
                printf("Yes\n");
            else
                printf("No\n");
        }
        l=0;k=0;
    }
    return 0;
}
