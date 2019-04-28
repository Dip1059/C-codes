#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j;
    char a[100]="kabir";
    char b[100]="Kabir";
    char c[100]="kobir";
    char d[100]="kaber";
    char *k;
    char *e[5]={a,b,c,d};
    for(i=0; i<4; i++)
        for(j=0; j<3; j++)
            if(strcmp(e[j],e[j+1])>0)
            {
                k=e[j];
                e[j]=e[j+1];
                e[j+1]=k;
            }
    for(i=0; i<4; i++)
        printf("%s\n",e[i]);

    return 0;
}

