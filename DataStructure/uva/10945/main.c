#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1000],b[1000],c[1000];
    int i,k,l=0;
    while(gets(a))
    {
        if(a[0]=='D'&&a[1]=='O'&&a[2]=='N'&&a[3]=='E')
            break;
        k=strlen(a);
        for(i=0; i<k; i++)
        {
            if(a[i]!=' '&&a[i]!='.'&&a[i]!=','&&a[i]!='?'&&a[i]!='!')
                if(a[i]>='A'&&a[i]<='Z')
                {
                    b[l]=a[i]+32;
                    l++;
                }
                else
                {
                    b[l]=a[i];
                    l++;
                }
        }
        strcpy(c,b);
        strrev(b);
        if(!strcmp(b,c))
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
        for(i=0; i<1000; i++)
        {
            a[i]=NULL;
            b[i]=NULL;
            c[i]=NULL;
        }
        l=0;
    }
    return 0;
}
