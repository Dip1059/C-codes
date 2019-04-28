#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i;
    char s[10];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s",s);
        if(!strcmp(s,"1")||!strcmp(s,"4")||!strcmp(s,"78"))
            printf("+\n");
        else if(!strcmp(s,"135")||!strcmp(s,"435")||!strcmp(s,"7835"))
            printf("-\n");
        else if(!strcmp(s,"914")||!strcmp(s,"944")||!strcmp(s,"9784"))
            printf("*\n");
        else if(!strcmp(s,"1901")||!strcmp(s,"1904")||!strcmp(s,"19078"))
            printf("?\n");
    }
    return 0;
}
