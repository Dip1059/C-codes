#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[10000],c[10000];
    int d=0,e,f,n=0;
    scanf("%s",a);
    for(f=0; f<strlen(a); f++)
        d+=a[f]-48;
    printf("%d\n",d);
    e=d;
    for(;;)
    {
        d=e%10;
        e=e/10;
        c[n]=d+48;
        if(e<10)
            break;
        n++;
    }
    c[n+1]=NULL;
    for(f=n; f>=0; f--)
    printf("%c",c[f]);
    return 0;
}
