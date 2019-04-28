#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i,j,k,m,l;
    //scanf("%d",&l);
    //printf("\n");
    char a[100],b[100],c[100];
x:
    gets(a);
    gets(b);
    j=strlen(a);
    k=strlen(b);
    if(j>k)
    {
        for(m=k; m<j; m++)
            b[m]='0';
        b[j]='\0';
    }
    else if(k>j)
    {
        for(m=j; m<k; m++)
            a[m]='0';
        a[k]='\0';
    }
    printf("\n");
    for(i=0; i<strlen(a); i++)
    {
        c[i]=(a[i]-48)+(b[i]-48);
    }
    //puts(a);
    //puts(b);
    //printf("\n");
    //printf("\n");
    puts(c);
    goto x;
    return 0;
}
